import sys,copy
from collections import deque
from itertools import combinations

def bfs(sx,sy,board,w,h):
    dq = deque()
    dq.append((sx,sy))

    dx = [1,-1,0,0]
    dy = [0,0,1,-1]

    while dq:
        x,y = dq.popleft()
        
        for i in range(4):
            mx = x + dx[i]
            my = y + dy[i]
      
            if mx < 0 or mx >= w or my < 0 or my >= h:
                continue
    
            # 빈 영역일 경우 덱에 넣고 board를 3으로 바꿈
            if board[my][mx] == 0:
                dq.append((mx,my))
                board[my][mx] = 3
  
  return board

h,w = map(int,sys.stdin.readline().rstrip().split())
board = [list(map(int,sys.stdin.readline().rstrip().split())) for _ in range(h)]
answer = 0

# 빈 영역의 좌표를 저장할 배열
empty = []

# 빈 영역 저장
for i in range(h):
    for j in range(w):
        if board[i][j] == 0:
        empty.append((i,j))

# 빈 영역에서 3개를 뽑는 조합
for c in list(combinations(empty,3)):
    new_board = copy.deepcopy(board)
    cnt = 0 
    
    # 빈 영역 벽으로 바꾸기
    for v in c:
        new_board[v[0]][v[1]] = 1

    # BFS
    for i in range(h):
        for j in range(w):
            if new_board[i][j] == 2:
                new_board = bfs(j,i,new_board,w,h)
    
    # 0개수 세기
    for z in new_board:
        cnt += z.count(0)

    answer = max(cnt,answer)

print(answer)