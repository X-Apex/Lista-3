def invertir_numero(n):
    invertido = 0
    while n != 0:
        digito = n % 10
        invertido = invertido * 10 + digito
        n //= 10
    return invertido


numero = int(input("Ingrese un número entero: "))
print("Número invertido:", invertir_numero(numero))
