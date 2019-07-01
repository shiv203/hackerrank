def find_coll_len(n1,n):
    maxi=array[len(array)-1]
    index=array[len(array)-2]
    array.pop()
    array.pop()
    max_val=maxi
    for i in range(n1,n+1):
        max2=find_len(i)
        maxi=max(maxi,max2)
        if(maxi==max2):
            index=i
            max_val=max2
        array.append(index)
    array.append(index)
    array.append(max_val)

def find_len(n):
    if(n>10**7-10):
        if((n%2)==0):
            return find_len(n//2)+1
        else:
            return find_len(3*n+1)+1
    if n==1:
        return 0
    elif count[n]>-1:
        return count[n]
    elif (n%2==0):
        count[n]=1+find_len(n//2)
        return count[n]
    else:
        count[n]=1+find_len(3*n+1)
        return count[n]

count = [-1 for i in range(10**7)]
n1=1
array=[]
array.append(0)
array.append(0)
array.append(0)
array.append(0)
prev_max=0
prev_index=0


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    if n==1:
        result= 0
    if n<=n1:
        result = array[n]
    else:
        find_coll_len(len(array)-2,n)
        result=array[n]
    n1=n
    print(result)
        
