import random

def aplicar_descuento_producto(precio, cantidad):
    total = precio * cantidad
    if precio > 300 and cantidad >= 2:
        cantidad_cobrar = (cantidad // 2) + (cantidad % 2)
        total = cantidad_cobrar * precio
    return total

def generar_codigo_compra():
    codigo = random.randint(1000, 100000)
    return f"C{codigo}"

def main():
    inventario = []
    try:
        with open("productos.txt", "r") as f:
            for linea in f:
                datos = linea.split()
                nombre = datos[0]
                precio = float(datos[1])
                cantidad = int(datos[2])
                inventario.append((nombre, precio, cantidad))
    except:
        print("Error al abrir productos.txt")
        return

    print("===== INVENTARIO DISPONIBLE =====")
    for i, (nombre, precio, stock) in enumerate(inventario, start=1):
        print(f"{i}. {nombre} | Precio: {precio:.2f} | Stock: {stock}")

    carrito = []
    while True:
        eleccion = int(input("\nIngrese el número del producto que desea comprar: "))
        if eleccion < 1 or eleccion > len(inventario):
            print("Producto inválido.")
            continue
        cantidad = int(input("Ingrese la cantidad que desea comprar: "))
        nombre, precio, stock = inventario[eleccion-1]
        if cantidad > stock:
            print("No hay suficiente stock.")
            continue
        carrito.append((nombre, precio, cantidad))
        opcion = input("¿Desea comprar otro producto? (s/n): ")
        if opcion.lower() != 's':
            break

    cliente = input("\nIngrese el nombre del cliente: ")
    codigo_compra = generar_codigo_compra()
    nombre_archivo = f"reporte_{cliente}_{codigo_compra}.txt"

    with open(nombre_archivo, "w") as reporte:
        reporte.write("===== REPORTE DE COMPRA =====\n\n")
        reporte.write(f"Cliente: {cliente}\n")
        reporte.write(f"Código de compra: {codigo_compra}\n\n")

        total_compra = 0
        for nombre, precio, cantidad in carrito:
            subtotal = aplicar_descuento_producto(precio, cantidad)
            reporte.write(f"{nombre} | Precio: {precio:.2f} | Cantidad: {cantidad} | Subtotal: {subtotal:.2f}\n")
            total_compra += subtotal

        if total_compra > 220:
            descuento = total_compra * 0.10
            total_compra -= descuento
            reporte.write(f"\nDescuento adicional del 10% aplicado: -{descuento:.2f}\n")

        reporte.write(f"\nTOTAL FINAL: {total_compra:.2f}\n")

    print(f"\nCompra realizada. Se generó el archivo: {nombre_archivo}")

if __name__ == "__main__":
    main()
