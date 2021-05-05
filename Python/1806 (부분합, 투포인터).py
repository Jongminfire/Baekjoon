n, s = map(int, input().split())
lst = list(map(int, input().split()))

INF = int(1e9)
start = 0
end = 0
ans = INF
total = 0

while end < len(lst):
    if total < s:
        total += lst[end]
        end += 1

    while total >= s:
        ans = min(ans, end-start)
        total -= lst[start]
        start += 1

print(ans if ans != INF else 0)
