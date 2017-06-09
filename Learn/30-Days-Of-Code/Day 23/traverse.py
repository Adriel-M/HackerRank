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

    def levelOrder(self, root):
        queue = []
        if root is not None:
            queue.append(root)
        while queue:
            curr = queue.pop(0)
            if curr.left:
                queue.append(curr.left)
            if curr.right:
                queue.append(curr.right)
            print(curr.data, end=" ")

T = int(input())
myTree = Solution()
root = None
for i in range(T):
    data = int(input())
    root = myTree.insert(root, data)
myTree.levelOrder(root)
