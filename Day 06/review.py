for i in range(int(input())):
    evens = ""
    odds = ""
    word = str(input())
    for j in range(len(word)):
        if j % 2 == 0:
            evens += word[j]
        else:
            odds += word[j]
    print("{} {}".format(evens, odds))
