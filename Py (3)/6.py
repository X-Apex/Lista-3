def burbuja_cadena(cadena):
    arreglo = list(cadena)
    n = len(arreglo)

    for i in range(n-1):
        for j in range(n-i-1):
            if arreglo[j] > arreglo[j+1]:
                arreglo[j], arreglo[j+1] = arreglo[j+1], arreglo[j]

    return "".join(arreglo)

cadena = input("Ingrese una cadena de caracteres: ")
print("La cadena ordenada es:", burbuja_cadena(cadena))
