def locate_princess(n, grid):
    for j in range(n):
        for i in range(n):
            if grid[j][i] == 'p':
                return i, j

def nextMove(n,r,c,grid):
    p_x, p_y = locate_princess(n, grid)
    if r != p_y:
        if r > p_y:
            return "UP"
        else:
            return "DOWN"
    if c != p_x:
        if c > p_x:
            return "LEFT"
        else:
            return "RIGHT"

n = int(input())
r,c = [int(i) for i in input().strip().split()]
grid = []
for i in range(0, n):
    grid.append(input())

print(nextMove(n,r,c,grid))
