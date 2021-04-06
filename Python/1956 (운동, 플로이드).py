import sys
input = sys.stdin.readline

INF = int(1e9)
n , m = map(int,input().split())
graph = [[INF] * (n+1) for _ in range(n+1)]     
ans = INF

for i in range(1,n+1):
    for j in range(1,n+1):
        if i == j:
            graph[i][j] = 0

for _ in range(m):
    a,b,c = map(int,input().split())
    graph[a][b] = c

for k in range(1,n+1):
    for a in range(1,n+1):
        for b in range(1,n+1):
            graph[a][b] = min(graph[a][b],graph[a][k] + graph[k][b]) 

for i in range(1,n+1):
  for j in range(1,n+1):
    if i != j:
      ans = min(ans,graph[i][j]+graph[j][i])

if ans >= INF:
  print(-1)
else:
  print(ans)