import copy,sys
input = sys.stdin.readline

n = int(input())

max_prev = [0,0,0]
max_now = [0,0,0]
min_prev = [0,0,0]
min_now = [0,0,0]

# board의 값을 미리 입력받으면 메모리초과 나기 때문에 입력 받으며 처리
for i in range(n):
  board = list(map(int,input().split()))
  max_now[0] = max(max_prev[0],max_prev[1]) + board[0]
  max_now[1] = max(max_prev) + board[1]
  max_now[2] = max(max_prev[1],max_prev[2]) + board[2]

  max_prev = copy.deepcopy(max_now)

  min_now[0] = min(min_prev[0],min_prev[1]) + board[0]
  min_now[1] = min(min_prev[0],min_prev[1],min_prev[2]) + board[1]
  min_now[2] = min(min_prev[1],min_prev[2]) + board[2]

  min_prev = copy.deepcopy(min_now)

print(max(max_now),min(min_now))