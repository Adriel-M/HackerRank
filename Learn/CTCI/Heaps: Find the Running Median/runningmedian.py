import heapq

class MedianHeap:
    def __init__(self):
        self._min_heap = []
        self._max_heap = []

    def _min_heap_insert(self, data):
        heapq.heappush(self._min_heap, data)

    def _max_heap_insert(self, data):
        heapq.heappush(self._max_heap, -data)

    def _min_heap_pop(self):
        return heapq.heappop(self._min_heap)

    def _max_heap_pop(self):
        return -heapq.heappop(self._max_heap)

    def _balance(self):
        if len(self._min_heap) > len(self._max_heap):
            action_pop = self._min_heap_pop
            action_insert = self._max_heap_insert
        else:
            action_pop = self._max_heap_pop
            action_insert = self._min_heap_insert
        while abs(len(self._min_heap) - len(self._max_heap)) > 1:
            action_insert(action_pop())

    def median(self):
        if not self._min_heap and self._max_heap:
            return None
        elif len(self._min_heap) > len(self._max_heap):
            return self._min_heap[0] / 1.0
        elif len(self._max_heap) > len(self._min_heap):
            return -self._max_heap[0] / 1.0
        else:
            return (self._min_heap[0] - self._max_heap[0]) / 2.0

    def insert(self, data):
        if not self._min_heap:
            self._min_heap_insert(data)
        else:
            if data > self.median():
                self._min_heap_insert(data)
            else:
                self._max_heap_insert(data)
            self._balance()

n = int(input().strip())
mheap = MedianHeap()
for _ in range(n):
    new = int(input().strip())
    mheap.insert(new)
    print(str(mheap.median()))

