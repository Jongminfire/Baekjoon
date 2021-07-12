n,m = map(int,input().split())
parent = [i for i in range(n+1)]
result = 0

def findParent(v):
  if parent[v] != v:
    parent[v] = findParent(parent[v])
  return parent[v]

def unionParent(a,b):
  if parent[a] != parent[b]:
    a = findParent(a)
    b = findParent(b)

    if a < b:
      parent[b] = a
    else:
      parent[a] = b

for i in range(1,n+1):
  parent[i] = i

for i in range(1,m+1):
  a,b = map(int,input().split())

  # 부모가 같은 경우 -> 사이클 존재
  if findParent(a) == findParent(b) and result == 0:
    result = i
  
  unionParent(a,b)

print(result)