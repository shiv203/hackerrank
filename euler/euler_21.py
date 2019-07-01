import math as m
def fact_list(n):
    l = 0
    for i in range(2,int(m.sqrt(n))+1):
        if n % i == 0:
            l += i
            l += n // i
        if i*i == n:
            l -= i
    return l+1
#print(fact_list(16))
key = 0
arr = []
t = int(input())
for i in range(t):
    n = int(input())
    s = 0
    if n > key:
        s = sum(arr)
        for i in range(key+1,n):
            t = (fact_list(i))

            k = (fact_list(t))
            if k == i and i != t:
                #print(i,t,k)
                arr.append(i)
                s += i
            key = i
        print(s)
    else:
        for i in arr:
            if i < n:
                s += i
            else:
                break
        print(s)
