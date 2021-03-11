import sys
from collections import deque

def bfs(sx,sy,visit,board,w,h):
  dq = deque()
  dq.append((sx,sy))

  dx = [1,1,1,-1,-1,-1,0,0]
  dy = [1,0,-1,1,0,-1,1,-1]

  while dq:
    x,y = dq.popleft()
    # 여기서 방문 처리를 하면 메모리초과 남
    for i in range(8):
      mx = x + dx[i]
      my = y + dy[i]
      
      if mx < 0 or mx >= w or my < 0 or my >= h:
        continue
      
      if visit[my][mx] == False and board[my][mx] == 1:
        dq.append((mx,my))
        # 여기서 방문 처리
        visit[my][mx] = True
        visit[y][x] = True

while True:  
  w,h = map(int,sys.stdin.readline().rstrip().split())
  
  if w == 0 and h == 0:
    break

  visit = [[False]*w for _ in range(h)]
  board = [list(map(int,sys.stdin.readline().rstrip().split())) for _ in range(h)]
  cnt = 0

  for i in range(w):
    for j in range(h):
      if visit[j][i] == False and board[j][i] == 1:
        bfs(i,j,visit,board,w,h)
        cnt += 1
    
  print(cnt)