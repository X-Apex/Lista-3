
filas = int(input("Ingrese número de filas: "))
columnas = int(input("Ingrese número de columnas: "))


matriz = []


print("Ingrese los elementos de la matriz:")
for i in range(filas):
    fila = list(map(int, input().split()))
   
    while len(fila) < columnas:
        fila += list(map(int, input().split()))
    matriz.append(fila[:columnas])

print("Matriz original:")
for fila in matriz:
    print(" ".join(map(str, fila)))

f, c = map(int, input("Ingrese fila y columna a modificar: ").split())
nuevoValor = int(input("Ingrese nuevo valor: "))

f -= 1 
c -= 1

if 0 <= f < filas and 0 <= c < columnas:
    matriz[f][c] = nuevoValor
else:
    print("Posición inválida.")

print("Matriz modificada:")
for fila in matriz:
    print(" ".join(map(str, fila)))
