n = int(input())
parent = [i for i in range(n+1)]
coor = [0] * (n+1)
edges = []
result = 0

def findParent(n):
  if parent[n] != n:
    parent[n] = findParent(parent[n])
  return parent[n]

def unionParent(a,b):
  if parent[a] != parent[b]:
    a = findParent(a)
    b = findParent(b)

    if a < b:
      parent[b] = a
    else:
      parent[a] = b

# 가장 인접한 좌표가 최소 신장 트리의 구성이 되므로 좌표를 세개 나누어 정렬 한 뒤, 인접 정점의 거리를 edges에 넣음
xcoors = []
ycoors = []
zcoors = []

for i in range(1,n+1):
  x,y,z = map(int,input().split())
  xcoors.append((x,i))
  ycoors.append((y,i))
  zcoors.append((z,i))

# x,y,z 좌표 정렬
xcoors.sort()
ycoors.sort()
zcoors.sort()

# x,y,z 세 경우를 전부 edges에 넣되, 인접한 정점끼리의 거리만 넣음
for i in range(n-1):
  edges.append((abs(xcoors[i+1][0]-xcoors[i][0]),xcoors[i+1][1],xcoors[i][1]))
  edges.append((abs(ycoors[i+1][0]-ycoors[i][0]),ycoors[i+1][1],ycoors[i][1]))
  edges.append((abs(zcoors[i+1][0]-zcoors[i][0]),zcoors[i+1][1],zcoors[i][1]))

edges.sort()

for edge in edges:
  dist,a,b = edge

  if findParent(a) != findParent(b):
    unionParent(a,b)
    result += dist

print(result)