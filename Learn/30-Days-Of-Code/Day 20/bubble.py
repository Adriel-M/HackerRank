n = int(input().strip())
a = list(map(int, input().strip().split(' ')))

total_swaps = 0
for i in range(n):
    curr_swaps = 0
    for j in range(n - 1):
        if a[j] > a[j + 1]:
            t = a[j]
            a[j] = a[j + 1]
            a[j + 1] = t
            curr_swaps += 1
    total_swaps += curr_swaps
    if curr_swaps == 0:
        break

print("Array is sorted in {} swaps.".format(total_swaps))
print("First Element: {}".format(a[0]))
print("Last Element: {}".format(a[n - 1]))
