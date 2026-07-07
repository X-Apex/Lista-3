# Bubble Sort
def bubble_sort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

# Merge Sort
def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr)//2
        L = arr[:mid]
        R = arr[mid:]

        merge_sort(L)
        merge_sort(R)

        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

def imprimir(arr):
    print(" ".join(map(str, arr)))

n = int(input("Ingrese tamaño del vector: "))
arr = []
print("Ingrese los elementos:")
for i in range(n):
    arr.append(int(input()))

arrBubble = arr.copy()
arrMerge = arr.copy()

bubble_sort(arrBubble)
print("Vector ordenado con Bubble Sort:", end=" ")
imprimir(arrBubble)

merge_sort(arrMerge)
print("Vector ordenado con Merge Sort:", end=" ")
imprimir(arrMerge)
