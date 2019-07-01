from math import factorial as f
t = int(input())
for i in range(t):
    n = list(map(int,input().split()))
    print(f(n[0]+n[1])//(f(n[0])*f(n[1]))%1000000007)
