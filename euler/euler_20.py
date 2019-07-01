t = int(input())
for i in range(t):
    n = int(input())
    f = 1
    for i in range(1,n+1):
        f *= i
    s = 0
    while f > 0 :
        s += f % 10
        f = f // 10
    print(s)
