def suma_vector():
    n = int(input("Ingrese la cantidad de elementos: "))
    vector = []
    suma = 0

    for i in range(n):
        valor = int(input(f"Elemento {i+1}: "))
        vector.append(valor)
        suma += valor

    print("La suma total de los elementos es:", suma)

# Ejecutar
suma_vector()
