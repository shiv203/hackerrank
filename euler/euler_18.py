n = int(input())
for temp in range(n):
    r = int(input())
    mat = [[-1 for x in range(r)] for x in range(r)]
    for i in range(r):
        t = input().split(" ")
        for j in range(len(t)):
            mat[i][j] = int(t[j])


    #print(mat)
    dp = [[-1 for x in range(r)] for x in range(r)]
    #print(dp)
    dp[0][0] = mat[0][0]
    for i in range(1,r):
        dp[i][0] = dp[i-1][0] + mat[i][0]
        for j in range(1,r):
            if j-1 >= 0 and i - 1 >= 0 :
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]) + mat[i][j]
    mini = -999
    for i in range(r):
        if mini < dp[r-1][i]:
            mini = dp[r-1][i]

    #print(dp)
    print(mini)
