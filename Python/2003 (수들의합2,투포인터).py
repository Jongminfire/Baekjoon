n, x = map(int, input().split())
lst = list(map(int, input().split()))

start = 0
end = 0
total = 0
cnt = 0

while end < len(lst):
    if total < x:
        total += lst[end]
        end += 1

    while total >= x:
        if total == x:
            cnt += 1

        total -= lst[start]
        start += 1

print(cnt)
