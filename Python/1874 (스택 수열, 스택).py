n = int(input())
s = [i for i in range(n, 0, -1)]
s2 = []
ans = []

for i in range(n):
    v = int(input())

    while v in s:
        s2.append(s.pop())
        ans.append('+')

    if s2[-1] == v:
        s2.pop()
        ans.append('-')

if not s and not s2:
    for i in ans:
        print(i)
else:
    print('NO')
