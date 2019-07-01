from itertools import permutations
s = "abcdefghijklm"

t = int(input())
for z in range(t):
    n = int(input())-1
    #print(n)
    fac = []
    for i in range(1,14):
        r = n % i
        fac.append(r)
        n = n // i
    #print(fac)
    temp = s
    out = ""
    for i in range(12,-1,-1):
        out += temp[fac[i]]
        temp = temp[:fac[i]] + temp[fac[i]+1:]
    print(out)
