def left_rotate(arr, k):
    return(arr[k % len(arr):] + arr[:k % len(arr)])

n, k = map(int, input().strip().split(' '))
a = list(map(int, input().strip().split(' ')))
answer = left_rotate(a, k)
print(*answer, sep=' ')
