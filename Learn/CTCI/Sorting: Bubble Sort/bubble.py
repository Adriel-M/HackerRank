def bubble_sort(arr):
    total_swaps = 0
    for i in range(len(arr)):
        curr_swaps = 0
        for j in range(len(arr) - 1):
            if arr[j] > arr[j + 1]:
                tmp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = tmp
                curr_swaps += 1
        total_swaps += curr_swaps
        if curr_swaps == 0:
            break
    return total_swaps

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
swaps = bubble_sort(a)
print("Array is sorted in {} swaps.".format(swaps))
print("First Element: {}".format(a[0]))
print("Last Element: {}".format(a[-1]))

