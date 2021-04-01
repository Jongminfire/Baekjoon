import heapq
import sys
input = sys.stdin.readline
INF = int(1e9)                      

n,m = map(int,input().split())            
graph = [[] for i in range(n+1)]    

for _ in range(m):
    a,b,c = map(int,input().split())
    graph[a].append((b,c))
    graph[b].append((a,c))

v1,v2 = map(int,input().split())
 
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

# 1, v1, v2에서 시작하는 다익스트라
dist1 = dijkstra(1,[INF]*(n+1))
distv1 = dijkstra(v1,[INF]*(n+1))
distv2 = dijkstra(v2,[INF]*(n+1))

# 두가지 경우의 수 비교
ans1 = dist1[v1]+distv1[v2]+distv2[n]
ans2 = dist1[v2]+distv2[v1]+distv1[n]
answer = min(ans1,ans2)

# answer가 무한이면 -1 아니면 answer 출력
print(answer if answer < int(1e9) else -1)