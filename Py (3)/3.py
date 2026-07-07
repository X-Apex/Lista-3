def matriz_identidad():
    n = int(input("Ingrese el tamaño de la matriz identidad: "))

    matriz = [[0 for j in range(n)] for i in range(n)]

    # Generar matriz identidad
    for i in range(n):
        matriz[i][i] = 1

    ################
    print(f"Matriz identidad de tamaño {n}:")
    for fila in matriz:
        print(" ".join(str(x) for x in fila))

matriz_identidad()
