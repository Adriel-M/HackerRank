n = int(input().strip())

curr_streak = 0
max_streak = 0
while n > 0:
    if n % 2 == 1:
        curr_streak += 1
        if curr_streak > max_streak:
            max_streak = curr_streak
    else:
        curr_streak = 0
    n //= 2

print(max_streak)

