from collections import deque

def bfs(start,last,visit):
  dq = deque([start])
  visit[start] = 0

  while dq:
    value = dq.popleft()

    if value == last:
      return visit[value]

    if value-1 >= 0:
      if visit[value-1] == -1:
        visit[value-1] = visit[value]+1
        dq.append(value-1)
    if value+1 <= 100000 :
      if visit[value+1] == -1:
        visit[value+1] = visit[value]+1
        dq.append(value+1)
    if value*2 <= 100000:
      if visit[value*2] == -1:
        visit[value*2] = visit[value]+1
        dq.append(value*2)

n,k = map(int,input().split())
visit = [-1] * (1000001)

print(bfs(n,k,visit))
