#!/bin/python3

import sys

def whoGetsTheCatch(n, x, X, V):
    seconds = 100000000
    catcher = -1
    count = 0
    for i in range(n):
        distance = abs(X[i] - x)
        t = distance / float(V[i])
        if t < seconds:
            seconds = t
            count = 1
            catcher = i
        elif t == seconds:
            count += 1
    if count > 1:
        return -1
    else:
        return catcher

#  Return the index of the catcher who gets the catch, or -1 if no one gets the catch.
n, x = input().strip().split(' ')
n, x = [int(n), int(x)]
X = list(map(int, input().strip().split(' ')))
V = list(map(int, input().strip().split(' ')))
result = whoGetsTheCatch(n, x, X, V)
print(result)
