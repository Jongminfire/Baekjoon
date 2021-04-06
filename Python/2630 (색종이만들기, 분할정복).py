n = int(input())
board = [list(map(int,input().split())) for _ in range(n)]
white = 0
blue = 0

def divide (x,y,size):
  # blue와 white 전역변수로 사용
  global blue
  global white
  color = board[x][y]

  for nx in range(x,x+size):
    for ny in range(y,y+size):
      if color != board[nx][ny]:
        divide(x,y,size//2)
        divide(x+size//2,y,size//2)
        divide(x,y+size//2,size//2)
        divide(x+size//2,y+size//2,size//2)

        return
  
  if color == 1:
    blue += 1
  else:
    white += 1

divide(0,0,n)

print(white)
print(blue)