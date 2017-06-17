def is_matched(expression):
    stack = []
    for letter in expression:
        if letter == "[":
            stack.append("]")
        elif letter == "{":
            stack.append("}")
        elif letter == "(":
            stack.append(")")
        else:
            # check if stack is not empty and check if popped is the same
            if not stack or letter != stack.pop():
                return False
    return stack == []

t = int(input().strip())
for _ in range(t):
    expression = input().strip()
    if is_matched(expression):
        print("YES")
    else:
        print("NO")
