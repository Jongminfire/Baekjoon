import sys
input = sys.stdin.readline
INF = int(1e9)

def bf(start):
  dist = [INF] * (n+1)

  for i in range(n):
    for j in range(m*2+w):
      cur = edges[j][0]
      next_node = edges[j][1]
      cost = edges[j][2]
    
      # 기존의 벨만포드와 달리 무한대 값이 포함되어 있어도 갱신 (음의 사이클 존재 여부 구하기 위해)
      if dist[next_node] > dist[cur] + cost:
        dist[next_node] = dist[cur] + cost

        if i == n-1 :
            return True
            
  
  return False

for _ in range(int(input())):
  n,m,w = map(int,input().split())
  edges = []

  for _ in range(m):
      a,b,c = map(int,input().split())
      # 이때 주어지는 도로는 방향간선이 아니므로 양방향으로 추가
      edges.append((a,b,c))
      edges.append((b,a,c))

  for _ in range(w):
      a,b,c = map(int,input().split())
      edges.append((a,b,-c)) 

  # 음의 사이클 검사만 하므로 벨만포드를 한번만 해도 된다.
  if bf(1):
    print("YES")
  else:
    print("NO")
