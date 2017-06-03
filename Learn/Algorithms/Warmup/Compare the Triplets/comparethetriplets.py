a_scores = input().strip().split(" ")
b_scores = input().strip().split(" ")

alice = 0
bob = 0

for i in range(len(a_scores)):
    if int(a_scores[i]) == int(b_scores[i]):
        continue
    elif int(a_scores[i]) > int(b_scores[i]):
        alice += 1
    else:
        bob += 1

print(alice, bob)
