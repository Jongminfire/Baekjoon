n, m = map(int, input().split())
lst = list(map(int, input().split()))

temp = sum(lst[:m])
ans = temp

for i in range(len(lst)-m):
    temp -= lst[i]
    temp += lst[i+m]
    ans = max(temp, ans)

print(ans)
