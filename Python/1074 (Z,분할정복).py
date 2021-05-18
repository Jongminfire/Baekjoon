n, r, c = map(int, input().split())


def divide(size, row, col, now):
    if row == r and col == c:
        print(now)
        return

    value = 2**(size-1)

    if row <= r < row+value and col <= c < col+value:
        divide(size-1, row, col, now)
    elif row <= r < row+value and col+value <= c:
        divide(size-1, row, col+(value), now+(value)**2)
    elif row+value <= r and col <= c < col+value:
        divide(size-1, row+(value), col, now+(value)**2*2)
    elif row+value <= r and col+value <= c:
        divide(size-1, row+(value), col+(value), now+(value)**2*3)


divide(n, 0, 0, 0)
