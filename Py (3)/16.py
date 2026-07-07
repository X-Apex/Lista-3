def particion(arr, inicio, fin):
    pivote = arr[fin]
    i = inicio - 1
    for j in range(inicio, fin):
        if arr[j] <= pivote:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i+1], arr[fin] = arr[fin], arr[i+1]
    return i+1

def quickSort(arr, inicio, fin):
    if inicio < fin:
        pi = particion(arr, inicio, fin)
        quickSort(arr, inicio, pi-1)
        quickSort(arr, pi+1, fin)

def imprimir(arr):
    print(" ".join(map(str, arr)))

n = int(input("Ingrese tamaño del vector: "))
arr = []
print("Ingrese los elementos:")
for i in range(n):
    arr.append(int(input()))

quickSort(arr, 0, n-1)

print("Vector ordenado:", end=" ")
imprimir(arr)
