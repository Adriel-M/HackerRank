class Node:
    def __init__(self, data):
        self.right = None
        self.left = None
        self.data = data

class Solution:
    def insert(self, root, data):
        if root is None:
            return Node(data)
        else:
            if root.data >= data:
                curr = self.insert(root.left, data)
                root.left = curr
            else:
                curr = self.insert(root.right, data)
                root.right = curr
        return root

    def getHeight(self, root):
        if root is None:
            return -1
        else:
            left = self.getHeight(root.left)
            right = self.getHeight(root.right)
            return max(left, right) + 1

T = int(input())
myTree = Solution()
root = None
for i in range(T):
    data = int(input())
    root = myTree.insert(root, data)
height = myTree.getHeight(root)
print(height)
