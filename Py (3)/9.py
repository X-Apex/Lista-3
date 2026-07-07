def multiplicacion_matrices(A, B):
    n = len(A)
    C = [[0]*n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                C[i][j] += A[i][k] * B[k][j]
    return C

# Programa principal
n = int(input("Ingrese el tamaño de la matriz: "))
A = []
B = []

print("Ingrese los elementos de la matriz A:")
for i in range(n):
    fila = [int(x) for x in input().split()]
    A.append(fila)

print("Ingrese los elementos de la matriz B:")
for i in range(n):
    fila = [int(x) for x in input().split()]
    B.append(fila)

C = multiplicacion_matrices(A, B)
print("Matriz resultante C:")
for fila in C:
    print(fila)
