n,d,k,c = map(int,input().split())
lst = [int(input()) for _ in range(n)]
ans = 0

# lst를 붙여서 선형 그래프로 변환
for i in range(n):
  lst.append(lst[i])

for i in range(n):
  temp = set()
  idx = 0
  event = True

  while idx < k and idx < n*2:
    temp.add(lst[i+idx])

    if lst[i+idx] == c:
      event = False

    idx += 1

  # 이벤트 초밥을 안받았을 경우 1추가
  ans = max(ans,len(temp)+(1 if event else 0))

print(ans)