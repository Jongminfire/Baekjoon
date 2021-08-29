from collections import defaultdict,deque
import sys

input = sys.stdin.readline

n,m = map(int,input().split())
edge = [[] for i in range(n+1)]
ans = []
maxCount = 0

for _ in range(m):
  a,b = map(int,input().split())
  edge[b].append(a)

def bfs(v):
  dq = deque()
  dq.append(v)
  hacked = [False for _ in range(n+1)]
  hacked[v] = True
  cnt = 1

  while dq:
    now = dq.popleft()
    for i in edge[now]:
      if not hacked[i]:
        hacked[i] = True
        cnt += 1
        dq.append(i)
  
  return cnt

for i in range(1,n+1):
  size = bfs(i)

  if maxCount < size:
    ans = [i]
    maxCount = size
  elif maxCount == size:
    ans.append(i)

print(*ans)

# DFS로 풀이 할 시 메모리초과 발생하여 BFS로 풀이하였음