import sys

s = set()
input = sys.stdin.readline

for _ in range(int(input())):
  f = input().split()

  if f[0] == 'add':
    s.add(int(f[1]))
  
  elif f[0] == 'remove':
    s.discard(int(f[1]))    # remove 대신 discard로는 중복된 요소 검사 필요 없음
  
  elif f[0] == 'check':
    if int(f[1]) in s:
      print(1)
    else:
      print(0)
  
  elif f[0] == 'toggle':
    if int(f[1]) in s:
      s.discard(int(f[1]))
    else:
      s.add(int(f[1]))
  
  elif f[0] == 'all':
    s = set([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20])
  
  elif f[0] == 'empty':
    s = set()