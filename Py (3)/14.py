def ordenar(v):
    n = len(v)
    for i in range(n-1):
        for j in range(n-i-1):
            if v[j] > v[j+1]:
                v[j], v[j+1] = v[j+1], v[j]

def imprimir(v):
    print(" ".join(map(str, v)))

# Programa principal
n = int(input("Ingrese tamaño del vector: "))
v = []

print("Ingrese los elementos:")
for i in range(n):
    v.append(int(input()))

ordenar(v)
print("Vector ordenado:", end=" ")
imprimir(v)
