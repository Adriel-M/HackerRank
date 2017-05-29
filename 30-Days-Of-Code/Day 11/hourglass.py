arr = []
for arr_i in range(6):
   arr_t = [int(arr_temp) for arr_temp in input().strip().split(' ')]
   arr.append(arr_t)

def get_sum(arry, x, y):
    val = 0
    val += sum(arry[y][x:x + 3])
    val += arry[y + 1][x + 1]
    val += sum(arry[y + 2][x:x + 3])
    return val

# with recursion just for fun
def get_max(arry, x, y):
    if x == 3 and y == 3:
        return get_sum(arry, x, y)
    else:
        curr = get_sum(arry, x, y)
        if x == 3:
            next = get_max(arry, 0, y + 1)
        else:
            next = get_max(arry, x + 1, y)
        return(max(curr, next))

print(get_max(arr, 0, 0))
