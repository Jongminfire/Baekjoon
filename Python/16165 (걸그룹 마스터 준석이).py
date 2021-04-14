n,m = map(int,input().split())
dic = {}

for i in range(n):
  team = str(input())
  member = int(input())

  dic[team] = []

  for j in range(member):
    dic[team].append(str(input())) 

for team in dic:
  dic[team].sort()

for _ in range(m):
  name = str(input())
  kind = int(input())

  if kind == 0:
    for member in dic[name]:
      print(member)
  else:
    for team in dic:
      if name in dic[team]:
        print(team)
        break
