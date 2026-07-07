n = int(input("Ingrese la cantidad de elementos: "))
vector = []

for i in range(n):
    valor = int(input(f"Elemento {i+1}: "))
    vector.append(valor)

print("Contenido del vector:", vector)
