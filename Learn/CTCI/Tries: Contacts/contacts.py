class Node:
    # Fix for test case 12
    __slots__ = ["next", "count"]

    def __init__(self):
        self.count = 1
        self.next = {}

class Contacts:
    def __init__(self):
        self._names = Node()
        self._names.count = 0

    def add(self, name):
        curr = self._names
        for letter in name:
            if letter not in curr.next:
                l = Node()
                curr.next[letter] = l
                curr = l
            else:
                curr.next[letter].count += 1
                curr = curr.next[letter]

    def find(self, query):
        curr = self._names
        for letter in query:
            if letter not in curr.next:
                return 0
            else:
                curr = curr.next[letter]
        return curr.count

n = int(input().strip())
contacts = Contacts()
for _ in range(n):
    op, contact = input().strip().split(' ')
    if op == "add":
        contacts.add(contact)
    else:
        print(contacts.find(contact))

