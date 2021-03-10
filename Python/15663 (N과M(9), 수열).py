from itertools import permutations

n,m = map(int,input().split())
lst = list(map(int,input().split()))
comb = set(permutations(lst,m))

for i in sorted(comb):
  for j in i:
    print(j , end = " ")
  print("")