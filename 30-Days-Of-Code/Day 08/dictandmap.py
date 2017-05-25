n = int(input().strip())

numbers = {}

# populate
for _ in range(n):
    entry = input().strip().split(" ")
    numbers[entry[0]] = entry[1]

# Until no more queries
while True:
    query = input()
    if query == "":
        break
    elif query in numbers:
        print("{}={}".format(query, numbers[query]))
    else:
        print("Not found")

