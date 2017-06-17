def has_cycle(head):
    count = 0
    curr = head
    while curr is not None and count < 101:
        count += 1
        curr = curr.next
    if count == 101:
        return 1
    else:
        return 0
