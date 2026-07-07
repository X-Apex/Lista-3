def promedio_archivo(nombre_archivo):
    suma = 0
    contador = 0
    try:
        with open(nombre_archivo, "r") as f:
            for linea in f:
                partes = linea.split()
                if len(partes) == 2:
                    nombre, nota = partes[0], float(partes[1])
                    suma += nota
                    contador += 1
        if contador > 0:
            print("Promedio general =", suma / contador)
        else:
            print("No se encontraron datos.")
    except FileNotFoundError:
        print("No se pudo abrir el archivo.")

promedio_archivo("estudiantes.txt")
