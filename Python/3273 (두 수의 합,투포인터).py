n = int(input())
lst = list(map(int, input().split()))
x = int(input())

start = 0
end = len(lst)-1
cnt = 0

lst.sort()

while start < end:
    temp = lst[start]+lst[end]

    # temp == x 처리는 작을 때와 클 때 어디든 해도 상관 없음
    if temp >= x:
        if temp == x:
            cnt += 1
        end -= 1
    else:
        start += 1

print(cnt)
