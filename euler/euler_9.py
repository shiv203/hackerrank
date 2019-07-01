import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    m = []
    t = -1
    for i in range(3,n//3+1):
        j = (n*n - 2 * i*n) //(2*n - 2*i)
        k = n - i - j
        if k*k == i*i + j*j:
            #print(i,j,k)
            m.append(i*j*k)
            if i*j*k > t:
                t = i*j*k
    if len(m) != 0:
        print(t)
    else:
        print(-1)
                
