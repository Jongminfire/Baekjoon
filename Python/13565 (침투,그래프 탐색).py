import sys

sys.setrecursionlimit(int(1e8))
input = sys.stdin.readline

n,m = map(int,input().split())
board = [list(map(int,str(input().rstrip()))) for _ in range(n)]
visit = [[False for _ in range(m)] for _ in range(n)]

def dfs(sy,sx):
  visit[sy][sx] = True

  for x,y in [(sx+1,sy),(sx,sy+1),(sx-1,sy),(sx,sy-1)]:
    if x < 0 or x >= m or y < 0 or y >= n:
      continue
    
    if board[y][x] == 0 and not visit[y][x]:
      dfs(y,x)

for i in range(m):
  if board[0][i] == 0 and not visit[0][i]:
    dfs(0,i)

print('YES' if visit[-1].count(True)> 0 else 'NO')

# pypy3는 메모리 초과로 python3으로 제출하였음