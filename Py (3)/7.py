def insercion_vector(vector):
    for i in range(1, len(vector)):
        clave = vector[i]
        j = i - 1
        while j >= 0 and vector[j] > clave:
            vector[j+1] = vector[j]
            j -= 1
        vector[j+1] = clave
    return vector

# Programa principal
n = int(input("Ingrese la cantidad de elementos: "))
vector = []
for i in range(n):
    valor = int(input(f"Elemento {i+1}: "))
    vector.append(valor)

print("Vector ordenado:", insercion_vector(vector))
