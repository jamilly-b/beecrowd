def contador_picos(valores):
    num = len(valores)
    pico = 0

    # Se o primeiro é pico
    if (valores[0] > valores[1] and valores[0] > valores[num - 1]) or (valores[0] < valores[1] and valores[0] < valores[num - 1]):
        pico += 1

    # Se o último é pico
    if (valores[num - 1] > valores[0] and valores[num - 1] > valores[num - 2]) or (valores[num - 1] < valores[0] and valores[num - 1] < valores[num - 2]):
        pico += 1

    for i in range(1, num - 1):
        # Pico alto
        if valores[i] > valores[i - 1] and valores[i] > valores[i + 1]:
            pico += 1

        # Pico baixo
        if valores[i] < valores[i - 1] and valores[i] < valores[i + 1]:
            pico += 1

    return pico


while True:
    num = int(input())
    
    if num == 0:
        break
    
    valores = list(map(int, input().split()))
    print(contador_picos(valores))
