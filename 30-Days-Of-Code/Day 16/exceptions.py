S = input().strip()

try:
    n = int(S)
    print(n)
except ValueError:
    print("Bad String")
