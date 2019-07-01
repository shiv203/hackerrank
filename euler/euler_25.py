fib_digit = []
s = ""
a = 1
b = 1
i = 2
while(len(s) < 5000):
    c = a + b
    if (len(str(c)) > len(s)):
        fib_digit.append(i+1)
        s = str(c)
    a = b
    b = c
    i += 1
fib_digit.append(i)
#print(fib_digit )
t = int(input())
for z in range(t):
    print(fib_digit[int(input())-1])
