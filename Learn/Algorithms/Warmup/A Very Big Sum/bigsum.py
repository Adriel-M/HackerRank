# Given code
n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

# Start
sum = 0

for i in range(n):
    sum += arr[i]

print(sum)
