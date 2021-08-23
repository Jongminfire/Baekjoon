from bisect import bisect_left

n,c = map(int,input().split())
lst = []
minDist = int(1e9+1)
maxDist = 0
ans = 0

for _ in range(n):
  value = int(input())
  lst.append(value)
  minDist = min(minDist,value)
  maxDist = max(maxDist,value)

lst.sort()

left = 0
right = maxDist

while left <= right:
  mid = (left+right)//2
  
  now = minDist
  # minDist에 하나 설치하고 시작하므로 count는 1부터 시작
  count = 1 

  for i in range(c-1):
    # lower bound로 값을 만족하는 최소 인덱스 구하기
    temp = bisect_left(lst,now+mid) 

    # 만족하는 인덱스 없을 경우 break
    if temp == n:   
      break
    else:
      now = lst[temp]
      count += 1

  if count < c:
    right = mid - 1
  else: 
    ans = max(mid,ans)

    # count가 c개일 경우 ans로 저장
    left = mid + 1
    
print(ans)

