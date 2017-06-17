class MyQueue:
    def __init__(self):
        self._enqueue_stack = []
        self._dequeue_stack = []

    def enqueue(self, data):
        self._enqueue_stack.append(data)

    def _transfer(self):
        while self._enqueue_stack:
            self._dequeue_stack.append(self._enqueue_stack.pop())

    def peek(self):
        if self._dequeue_stack:
            return self._dequeue_stack[-1]
        elif self._enqueue_stack:
            return self._enqueue_stack[0]
        else:
            return None

    def dequeue(self):
        if not self._dequeue_stack and not self._enqueue_stack:
            return None
        elif not self._dequeue_stack:
            self._transfer()
        return self._dequeue_stack.pop()

queue = MyQueue()
t = int(input())
for _ in range(t):
    values = map(int, input().split())
    values = list(values)
    if values[0] == 1:
        queue.enqueue(values[1])
    elif values[0] == 2:
        queue.dequeue()
    else:
        print(queue.peek())

