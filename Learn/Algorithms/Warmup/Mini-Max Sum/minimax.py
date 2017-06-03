import sys
# given
arr = list(map(int, input().strip().split(' ')))

# start
min_value = sys.maxsize
max_value = -(sys.maxsize - 1)
sum = 0

for i in arr:
    sum += i
    if i < min_value:
        min_value = i
    if i > max_value:
        max_value = i

print(sum - max_value, sum - min_value)
