from collections import deque
import sys

input = sys.stdin.readline

n = int(input())
parent = [-1 for _ in range(n+1)]
edge = [[] for _ in range(n+1)]
parent[1] = 0

def bfs(start):
  dq = deque()

  for i in edge[start]:
    dq.append((i,start))

  while dq:
    a,b = dq.popleft()
    parent[a] = b
    
    for i in edge[a]:
      if parent[i] == -1:
        dq.append((i,a))

for i in range(n-1):
  a,b = map(int,input().split())
  edge[a].append(b)
  edge[b].append(a)

bfs(1)

for i in range(2,n+1):
  print(parent[i])