from itertools import combinations

while True:
  lst = list(map(int,input().split()))
  
  if lst[0] == 0:
    break

  del lst[0]

  for i in combinations(lst,6):
    for j in i:
      print(j,end = " ")
    print("")
  print("")