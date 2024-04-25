A, B, C = map(float,input().split())
delta = (B**2) - (4*A*C)
if A == 0 or delta<0:
    print("Impossivel calcular")
else:
    x1 = (-B + (delta**0.5))/(2*A)
    x2 = (-B - (delta**0.5))/(2*A)
    print("R1 = %.5f\nR2 = %.5f" % (x1, x2))