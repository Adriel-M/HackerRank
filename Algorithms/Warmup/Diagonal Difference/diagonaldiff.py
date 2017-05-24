# Supplied code
n = int(input().strip())
a = []
for a_i in range(n):
    a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
    a.append(a_t)

# Start
first = 0
second = 0
for i in range(n):
    first += a[i][i]
    second += a[i][(n - 1) - i]

diff = first - second

if diff < 0:
    diff *= -1

print(diff)
