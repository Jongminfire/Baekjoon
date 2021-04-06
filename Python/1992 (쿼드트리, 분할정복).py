n = int(input())
board = [list(map(int,input())) for _ in range(n)]
ans = ''

def divide (x,y,size):
  global ans
  color = board[x][y]
  # 분할 시작시 ( 추가
  ans += '('

  for nx in range(x,x+size):
    for ny in range(y,y+size):
      if color != board[nx][ny]:
        divide(x,y,size//2)
        divide(x,y+size//2,size//2)
        divide(x+size//2,y,size//2)
        divide(x+size//2,y+size//2,size//2)

        # 분할 필요하면 맨 뒤에 )추가
        ans += ')'
        return
  
  # 모든 요소가 동일하면 ( 제거
  ans = ans[:-1]

  if color == 1:
    ans += '1'
  else:
    ans += '0'

divide(0,0,n)

print(ans)