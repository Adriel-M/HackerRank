def is_prime(n):
    if n <= 1:
        return False
    elif n <= 3:
        return True
    elif n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

p = int(input().strip())
for _ in range(p):
    n = int(input().strip())
    if is_prime(n):
        print("Prime")
    else:
        print("Not prime")

