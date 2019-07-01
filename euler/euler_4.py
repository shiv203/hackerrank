
pal = []
true_pal = []
for i in range(100,1000):
    t = str(i)+str(i)[::-1]
    pal.append(int(t))

#print (pal)
for x in range(100,1000):
    for y in range(x+1,1000):
        if x*y in pal:
            #print(x,y,x*y)
            true_pal.append(x*y)
true_pal.sort()
t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    for i in range(len(true_pal)):
        if true_pal[i] < n:
            pass
        else:
            print(true_pal[i-1])
            break
 
