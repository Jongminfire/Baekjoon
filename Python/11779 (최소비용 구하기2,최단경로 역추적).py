import heapq
import sys
input = sys.stdin.readline
INF = int(1e9)

n = int(input())
m = int(input())
graph = [[] for i in range(n+1)]
distance = [INF] * (n+1)
path = [i for i in range(n+1)]  # 경로 저장하기 위한 리스트

for _ in range(m):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))


def dijkstra(start):
    q = []
    heapq.heappush(q, (0, start))
    distance[start] = 0

    while q:
        dist, now = heapq.heappop(q)

        if distance[now] < dist:
            continue

        for i in graph[now]:
            cost = dist + i[1]

            if cost < distance[i[0]]:
                distance[i[0]] = cost
                path[i[0]] = now  # 최단거리 갱신시 path 값 현재 노드로 변경
                heapq.heappush(q, (cost, i[0]))


start, end = map(int, input().split())
dijkstra(start)
paths = []  # 최단 경로 추적을 위한 리스트
idx = end   # 역추적이기 때문에 end부터 검사

while idx != start:
    paths.append(idx)
    idx = path[idx]

paths.append(start)

print(distance[end])    # 최단 거리
print(len(paths))   # 경로의 길이
print(*reversed(paths))  # 최단 경로
