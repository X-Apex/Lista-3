def punto_calidad(promedio):
    if 90 <= promedio <= 100:
        return 4
    elif promedio >= 80:
        return 3
    elif promedio >= 70:
        return 2
    elif promedio >= 60:
        return 1
    else:
        return 0

n = int(input("Ingrese cantidad de notas: "))
suma = 0
for i in range(1, n+1):
    nota = int(input(f"Ingrese nota {i}: "))
    suma += nota

promedio = suma // n  
print("Promedio:", promedio)
print("Punto de calidad:", punto_calidad(promedio))
