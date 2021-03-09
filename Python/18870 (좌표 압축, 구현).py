import sys,heapq

n = int(input())
lst = list(map(int,sys.stdin.readline().rstrip().split()))
board = []
idx = 0

for i in range(len(lst)):
  heapq.heappush(board,[lst[i],i])

while board:
  num = board[0][0]

  while board[0][0] == num:
    lst[board[0][1]] = idx
    heapq.heappop(board)

    if not board:
      break

  idx += 1

for i in lst:
  print(i , end = " ")

"""
n=int(input())
x=list(map(int,input().split()))
xt=list(sorted(set(x)))
xt={xt[i]:i for i in range(len(xt))}
print(*[xt[i] for i in x])

와 같이 dictionary와 set를 이용해서 더 빠르게 풀 수 있음
"""