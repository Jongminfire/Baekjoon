from collections import deque

n = int(input())
edge = [set() for _ in range(n+1)]
visited = [False for _ in range(n+1)]

for _ in range(n-1):
  a,b = map(int,input().split())
  edge[a].add(b)
  edge[b].add(a)

def dfs(s,ans):
  if visited[s]:
    return
  
  visited[s] = True
  ans.popleft()

  # ans의 맨 앞 요소가 남아있을 때까지 검사후 dfs
  while ans and ans[0] in edge[s]:
      dfs(ans[0],ans)

ans = deque(list(map(int,input().split())))

dfs(1,ans)

print(1 if not ans else 0)