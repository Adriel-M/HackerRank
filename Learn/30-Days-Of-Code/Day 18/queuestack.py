from collections import deque

class Solution:
    def __init__(self):
        self._stack = []
        self._queue = deque()

    def pushCharacter(self, ch):
        self._stack.append(ch)

    def enqueueCharacter(self, ch):
        self._queue.append(ch)

    def popCharacter(self):
        return self._stack.pop()

    def dequeueCharacter(self):
        return self._queue.popleft()

s = input()
obj = Solution()
l = len(s)
for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])

isPalindrome = True

for i in range(l // 2):
    if obj.popCharacter() != obj.dequeueCharacter():
        isPalindrome = False
        break

if isPalindrome:
    print("The word, {}, is a palindrome.".format(s))
else:
    print("The word, {}, is not a palindrome.".format(s))
