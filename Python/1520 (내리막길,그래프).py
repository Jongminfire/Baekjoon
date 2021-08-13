import sys

input = sys.stdin.readline
sys.setrecursionlimit(int(1e9))

m,n = map(int,input().split())
graph = [list(map(int,input().split())) for _ in range(m)]
visit = [[-1 for _ in range(n)] for _ in range(m)]

def dfs(x,y):
  # 끝에 도달하면 1 반환하여 더 해줌
  if x == m-1 and y == n-1:
    return 1

  # 이미 끝까지 방문한 지점이면 visit[x][y] 반환
  if visit[x][y] != -1:
    return visit[x][y]

  visit[x][y] = 0

  for nx,ny in [(x+1,y),(x-1,y),(x,y-1),(x,y+1)]:
    if 0 <= nx < m and 0 <= ny < n and graph[x][y] > graph[nx][ny]:
      visit[x][y] += dfs(nx,ny)

  return visit[x][y]

print(dfs(0,0))

# pypy3는 메모리초과 발생하여 python3으로 제출함