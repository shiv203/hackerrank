t = int(input())

for i in range(t):
    n = int(input())
    k = 2 ** n
    s = 0
    while k > 0:
        s = s + k % 10
        k = k // 10
    print(s)
