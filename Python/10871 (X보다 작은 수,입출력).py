n, x = map(int, input().split())
for i in [n for n in input().split() if int(n) < x]:
    print(i, end=' ')
