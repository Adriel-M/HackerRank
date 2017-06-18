def fib(n, memoized):
    if n in memoized:
        return memoized[n]
    else:
        if n <= 1:
            memoized[n] = n
            return n
        else:
            result = fib(n - 1, memoized) + fib(n - 2, memoized)
            memoized[n] = result
            return result

n = int(input())
mem = {}
print(fib(n, mem))

