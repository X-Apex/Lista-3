def ordenar_par_impar(arr):
    pares = [x for x in arr if x % 2 == 0]
    impares = [x for x in arr if x % 2 != 0]

    pares.sort() 
    impares.sort(reverse=True) 

    return pares + impares


n = int(input("Ingrese tamaño del vector: "))
arr = []
print("Ingrese los elementos:")
for i in range(n):
    arr.append(int(input()))

resultado = ordenar_par_impar(arr)
print("Vector ordenado:", resultado)
