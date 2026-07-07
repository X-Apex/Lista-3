def promedio_notas():
    n = int(input("Ingrese la cantidad de notas: "))
    notas = []
    suma = 0

    for i in range(n):
        valor = float(input(f"Nota {i+1}: "))
        notas.append(valor)
        suma += valor

    promedio = suma / n
    print("El promedio de las notas es:", promedio)

promedio_notas()