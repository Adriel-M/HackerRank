# Supplied code
n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

# start
for i in range(n - 1, -1, -1):
    if i != 0:
        print(arr[i], end=' ')
    else:
        print(arr[i])
