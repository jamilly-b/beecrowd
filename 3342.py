n = int(input(""))
n = n * n

if n % 2 == 0:
    branco = n / 2
    preto = n / 2
else:
    branco = n / 2 + 0.5
    preto = n / 2 - 0.5
    
print("%d casas brancas e %d casas pretas" %(branco, preto))