def productos_descuento(nombre_archivo):
    try:
        with open(nombre_archivo, "r") as f:
            for linea in f:
                partes = linea.split()
                if len(partes) == 2:
                    nombre = partes[0]
                    precio = float(partes[1])
                    if precio > 999:
                        precioFinal = precio * 0.8
                        print(f"{nombre} | Precio original: {precio} | Precio con descuento: {precioFinal}")
                    else:
                        print(f"{nombre} | Precio: {precio} | Sin descuento")
    except FileNotFoundError:
        print("No se pudo abrir el archivo.")
        
productos_descuento("productos.txt")
