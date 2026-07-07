def intercambiar(valores):
    valores[0], valores[1] = valores[1], valores[0]

# Programa principal
x = int(input("Ingrese primer valor: "))
y = int(input("Ingrese segundo valor: "))

valores = [x, y]
intercambiar(valores)

print("Después del intercambio: x =", valores[0], "y =", valores[1])
