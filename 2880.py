mCrip = input().strip()
crib = input().strip()

n = 0
n = sum(1 for i in range(len(mCrip) - len(crib) + 1)
if all(mCrip[i + j] != crib[j] for j in range(len(crib))))

print(n)