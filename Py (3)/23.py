def mcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

x = int(input("Ingrese primer número: "))
y = int(input("Ingrese segundo número: "))

print("El MCD es:", mcd(x, y))
