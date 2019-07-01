import sys


grid = []
for grid_i in range(20):
	grid_t = [int(grid_temp) for grid_temp in input().strip().split(' ')]
	grid.append(grid_t)
m = []
bg = []
for i in range(30):
    bg.append([0]*30)

for i in range(5,25):
    for j in range(5,25):
        bg[i][j] = grid[i-5][j-5]

#print(bg)
for i in range(26):
    for j in range(26):
        m.append(bg[i][j]*bg[i+1][j+1]*bg[i+2][j+2]*bg[i+3][j+3])
        m.append(bg[i][j]*bg[i][j+1]*bg[i][j+2]*bg[i][j+3])
        m.append(bg[i][j]*bg[i-1][j+1]*bg[i-2][j+2]*bg[i-3][j+3])
        m.append(bg[i][j]*bg[i+1][j]*bg[i+2][j]*bg[i+3][j])

print(max(m))
