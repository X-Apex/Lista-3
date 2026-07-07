def es_simetrica(matriz):
    n = len(matriz)
    for i in range(n):
        for j in range(n):
            if matriz[i][j] != matriz[j][i]:
                return False
    return True

n = int(input("Ingrese tamaño de la matriz: "))
matriz = []

print("Ingrese los elementos de la matriz:")
for i in range(n):
    fila = list(map(int, input().split()))
    matriz.append(fila)

if es_simetrica(matriz):
    print("La matriz es simétrica")
else:
    print("La matriz NO es simétrica")
