N = int(input().strip())
names = []
for _ in range(N):
    name,email = input().strip().split(' ')
    name,email = [str(name),str(email)]
    if email.endswith("@gmail.com"):
        names.append(name)

names.sort()
for n in names:
    print(n)

