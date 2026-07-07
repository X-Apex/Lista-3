def transposicion(matriz):
    n = len(matriz)
    m = len(matriz[0])
    transpuesta = [[0]*n for _ in range(m)]

    for i in range(n):
        for j in range(m):
            transpuesta[j][i] = matriz[i][j]
    return transpuesta

# Programa principal
n = int(input("Ingrese número de filas: "))
m = int(input("Ingrese número de columnas: "))

matriz = []
for i in range(n):
    fila = []
    for j in range(m):
        valor = int(input(f"Elemento [{i}][{j}]: "))
        fila.append(valor)
    matriz.append(fila)

print("Matriz transpuesta:")
for fila in transposicion(matriz):
    print(fila)
