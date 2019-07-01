
import sys
import math
def prime_fac(n):
    pf = []
    while n % 2 == 0:
        pf.append(2)
        n = n / 2
    for i in range(3,int(math.sqrt(n))+1,2):
        while n % i == 0:
            pf.append(i)
            n = n / i
    if n > 2 :
        pf.append(n)

    return max(pf)

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    print(int(prime_fac(n)))
