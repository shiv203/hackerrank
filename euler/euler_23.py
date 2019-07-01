import math
def sum_fac(n):
    count = 1
    for i in range(2,int(math.sqrt(n))+1):
        if n % i == 0:
            count += i
            count += n //i
        if i*i == n:
            count -= i
    return count

t = int(input())
arr = []
for i in range(t):
    arr.append(int(input()))

m = max(arr)
if m > 28123:
    m = 28123
abd = []
for i in range(2,m):
    if sum_fac(i) > i:
        abd.append(i)
for i in arr:
    if i > 28123:
        print("YES")
        continue
    for j in abd:
        if j < i :
            if i - j in abd:
                print("YES")
                break
    else:
        print("NO")
