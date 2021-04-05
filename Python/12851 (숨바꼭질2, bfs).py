from collections import deque

n,k = map(int,input().split())
visit = [False for _ in range(100001)]
ans = 0
count = 0

dq = deque()
dq.append((n,0))
visit[n] = True

if n > k:
  print(n-k)
  print(1)

elif n == k:
  print(0)
  print(1)

else:
  while dq:
    v,c = dq.popleft()
    # 방법의 개수를 구하므로 덱에서 꺼낼 때 visit 처리 함
    visit[v] = True

    # 답보다 긴 시간일 경우 중단
    if ans !=0 and c > ans:
        break
    
    if ans == c and v == k:
      count += 1

    else:
      for i in [v+1,v-1,v*2]:
        if 0 <= i and i <= 100000:
          if visit[i] == False:
            dq.append((i,c+1))
            
            if i == k and ans == 0:
              ans = c+1

  print(ans)
  print(count)