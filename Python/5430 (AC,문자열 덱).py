from collections import deque

for _ in range(int(input())):
  func = input()
  size = int(input())
  lst = deque(map(int,input()[1:-1].replace(',',' ').split()))

  error = True
  reverse = False

  for i in func:
    if i == 'R':
      if reverse:
        reverse = False
      else:
        reverse = True

    elif i == 'D':
      if lst:
        if reverse:
          lst.pop()
        else:
          lst.popleft()
      else:
        error = False
        break

  if error:
    print('[',end='')
    for i in range(len(lst)):
      if reverse:
        print(lst[-i-1],end='')
      else:
        print(lst[i],end='')
      if i != len(lst)-1:
        print(',',end='')
    print(']')
  else:
    print("error")

# reverse() 메소드를 쓰면 시간초과 나므로 reverse로 검사 후 pop과 popleft로 삭제처리