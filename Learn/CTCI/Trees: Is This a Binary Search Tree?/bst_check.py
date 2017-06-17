def checkBST(root):
    return checkBST_help(root, -1, 100001)

def checkBST_help(root, min_value, max_value):
    if root is None:
        return True
    if root.data >= max_value or root.data <= min_value:
        return False
    return checkBST_help(root.left, min_value, root.data) and \
            checkBST_help(root.right, root.data, max_value)
