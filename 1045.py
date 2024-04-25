A, B, C = map(float, input().split())

lista = [A, B, C]
lista = sorted(lista, reverse = True)

A, B, C = lista

if A >= B + C:
    print("NAO FORMA TRIANGULO")

else:
    if (A**2) == (B ** 2) + (C ** 2):
        print("TRIANGULO RETANGULO")
        
    elif (A**2) > (B ** 2) + (C ** 2):
        print("TRIANGULO OBTUSANGULO")
    
    elif (A**2) < (B ** 2) + (C ** 2):
        print("TRIANGULO ACUTANGULO")
    
    if A == B and B == C:
        print("TRIANGULO EQUILATERO")
        
    elif A == B or B == C or A == C:
        print("TRIANGULO ISOSCELES")
