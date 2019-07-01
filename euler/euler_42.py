import math
n = int(input())

for t0 in range(n):
    z = int(input())
    n = (-1 + math.sqrt(1+8*z) )/2
    if int(n) == n:
        print(int(n))
    else:
        print(-1)
