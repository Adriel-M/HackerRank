def max_value(n, k):
    if ((k - 1) | k) <= n:
        return k - 1
    else:
        return k - 2

t = int(input().strip())
for _ in range(t):
    n, k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    print(max_value(n, k))

