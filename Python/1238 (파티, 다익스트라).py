import heapq
import sys

input = sys.stdin.readline
INF = int(1e9)                      

n,m,x = map(int,input().split())       
graph = [[] for i in range(n+1)]
dist = [[]]
ans = 0

for _ in range(m):
    a,b,c = map(int,input().split())           
    graph[a].append((b,c))

# 다익스트라
def dijkstra(start,distance):
    q = []
    heapq.heappush(q,(0,start))                
    distance[start] = 0

    while q:
        dist , now = heapq.heappop(q)          
        
        if distance[now] < dist:               
            continue
            
        for i in graph[now]:                   
            cost = dist + i[1]

            if cost < distance[i[0]]:          
                distance[i[0]] = cost
                heapq.heappush(q, (cost,i[0]))
    
    return distance

# 1부터 n까지 다익스트라 결과 dist 그래프로 저장
for i in range(1,n+1):
  dist.append(dijkstra(i,[INF]*(n+1)))

# dist 그래프에서 i에서 x까지, x에서 i까지 최대값 계산
for i in range(1,n+1):
  ans = max(ans,dist[i][x]+dist[x][i])

print(ans)