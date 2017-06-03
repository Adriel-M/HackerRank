# Given code
n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

# Start
pos = 0.0
zero = 0.0
neg = 0.0
for i in arr:
    if i == 0:
        zero += 1
    elif i > 0:
        pos += 1
    else:
        neg += 1

print("%.6f" % (pos / n))
print("%.6f" % (neg / n))
print("%.6f" % (zero / n))

