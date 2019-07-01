temp= input().split(" ")
n = int(temp[0])
k = int(temp[1])

s = 0
def base_pal(i,n):
    l = ""
    while i > 0:
        l = l + str(i % n)
        i = i // n

    return l == l[::-1]


for i in range(1,n):
    t = str(i)

    if t != t[::-1]:
        continue

    if not base_pal(i,k):
        continue

    s = s + i

print(s)
