from collections import deque

a,b = map(int,input().split())
ans = -2

dq = deque()
dq.append((a,0))

while dq:
  n,v = dq.popleft()

  # 두 가지 경우에 대해 검사 (방문 검사를 위해 visit 배열을 사용하면 범위가 10**9 까지므로 너무 많은 메모리를 사용하게 됨)
  for i in [n*2,int(str(n)+'1')]:
    if i <= b:
      dq.append((i,v+1))

      if i == b:
        ans = v+1
        break

print(ans+1)