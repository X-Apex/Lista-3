def maximo_minimo():
    n = int(input("Ingrese la cantidad de elementos: "))
    vector = []

    for i in range(n):
        valor = int(input(f"Elemento {i+1}: "))
        vector.append(valor)

    mayor = vector[0]
    menor = vector[0]

    for i in range(1, n):
        if vector[i] > mayor:
            mayor = vector[i]
        if vector[i] < menor:
            menor = vector[i]

    print("El valor máximo es:", mayor)
    print("El valor mínimo es:", menor)

# Ejecutar
maximo_minimo()
