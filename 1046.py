A, B = map(int, input().split())

if B < A:
    soma = (24 - A) + B
else: 
    soma = A + B

if A < B:
    soma = B - A
    
if A == B:
    soma = 24
print(f'O JOGO DUROU {soma} HORA(S)')