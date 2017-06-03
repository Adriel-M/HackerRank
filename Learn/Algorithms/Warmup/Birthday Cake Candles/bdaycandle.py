# given
n = int(input().strip())
height = [int(height_temp) for height_temp in input().strip().split(' ')]

# start
max_value = 0
max_count = 0
for i in height:
    if i > max_value:
        max_value = i
        max_count = 1
    elif i == max_value:
        max_count += 1

print(max_count)
