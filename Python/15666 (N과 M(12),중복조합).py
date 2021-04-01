from itertools import combinations_with_replacement

n,m = map(int,input().split())
num = list(map(int,input().split()))
num.sort()

lst = list(combinations_with_replacement(sorted(set(num)),m))

for i in lst:
  for j in range(m):
    print(i[j], end= ' ')
  print('')