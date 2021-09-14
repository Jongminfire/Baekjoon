n = int(input())
lst = sorted(list(map(int,input().split())))
INF = int(1e9)*3+1
min_value = INF
ans = []

# 0,부터 n-3까지 고정으로 검사
for i in range(n-2):
  left = i+1
  right = n-1

  while left < right:
    temp = lst[i] + lst[left] + lst[right]

    if abs(temp) < abs(min_value):
      min_value = temp
      ans = [lst[i],lst[left],lst[right]]

    # temp 합이 0 보다 작으면 두번째 요소 인덱스 증가
    if temp < 0:
      left += 1
    
    # temp 합이 0 보다 크면 세번째 요소 인덱스 증가
    elif temp > 0:
      right -= 1
    
    # 합 0이면 종료
    else:
      break

print(*ans)