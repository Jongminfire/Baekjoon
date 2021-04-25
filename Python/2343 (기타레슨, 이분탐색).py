n, m = map(int, input().split())
lecture = list(map(int, input().split()))

# leture을 입력 받은 순으로 묶어야 하므로 정렬하면 안됨

left = max(lecture)
right = sum(lecture)
ans = right

while left <= right:
    mid = (left+right) // 2
    cnt = 1
    s = 0

    for i in lecture:
        if s+i > mid:
            cnt += 1
            s = i
        else:
            s += i

    if cnt <= m:
        right = mid - 1
        ans = mid
    else:
        left = mid + 1

print(ans)
