n = int(input())
board = [list(map(int,input().split())) for _ in range(n)]
mo = 0
z = 0
o = 0

def divide (x,y,size):
  global mo,z,o
  color = board[x][y]

  for i in range(x,x+size):
    for j in range(y,y+size):
      if color != board[i][j]:
        for nx in [x,x+size//3,x+size//3*2]:
          for ny in [y,y+size//3,y+size//3*2]:
            divide(nx,ny,size//3)
        return


  if color == -1:
    mo += 1
  elif color == 0:
    z += 1
  else:
    o += 1

divide(0,0,n)

print(mo)
print(z)
print(o)