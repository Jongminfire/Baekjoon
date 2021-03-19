n,m = map(int,input().split())
board = [list(map(int,input())) for _ in range(n)]
answer = 0

for i in range(1,n+1):
  check = False
  for w in range(n-i+1):
    for h in range(m-i+1):
      if board[w][h] == board[w+i-1][h] == board[w][h+i-1] == board[w+i-1][h+i-1]:
        check = True
        break
  
  if check == True:
    answer = i*i

print(answer)