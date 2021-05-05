n = int(input())
m = int(input())
lst = list(map(int, input().split()))

lst.sort()

start = 0
end = len(lst)-1
cnt = 0

while start < end:
    if lst[start]+lst[end] <= m:
        if lst[start]+lst[end] == m:
            cnt += 1
        start += 1

    elif lst[start]+lst[end] > m:
        end -= 1

print(cnt)
