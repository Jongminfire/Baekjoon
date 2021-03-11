import sys

n,m = map(int,sys.stdin.readline().rstrip().split())
# 좌표 계산을 위해 맨 앞줄에 0 추가
board = [[0] * (n+1)]

for i in range(n):
  # 좌표 계산을 위해 맨 앞에 0 추가
  lst = [0]+list(map(int,sys.stdin.readline().rstrip().split()))
  board.append(lst)

# 열 누적합 계산
for i in range(1,n+1):
  for j in range(1,n):
    board[i][j+1] += board[i][j]

# 행 누적합 계산
for i in range(1,n+1):
  for j in range(1,n):
    board[j+1][i] += board[j][i]

for _ in range(m):
  x1,y1,x2,y2 = map(int,sys.stdin.readline().rstrip().split())
  # 누적합 계산 ((x2,y2) - (x2,y1-1) - (x1-1,y2) + (x2,y2))
  print(board[x2][y2]+board[x1-1][y1-1]-board[x2][y1-1]-board[x1-1][y2])