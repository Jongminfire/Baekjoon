import heapq
import sys
input = sys.stdin.readline
INF = int(1e9)
idx = 1

while True:
    n = int(input())
    if n == 0:
        break

    graph = []
    distance = [[INF for _ in range(n)] for _ in range(n)]

    for _ in range(n):
        graph.append(list(map(int, input().split())))

    def dijkstra(sx, sy):
        q = []
        heapq.heappush(q, (graph[sx][sy], sx, sy))
        distance[sx][sy] = graph[sx][sy]

        while q:
            dist, x, y = heapq.heappop(q)

            if distance[x][y] < dist:
                continue

            for nx, ny in [(x-1, y), (x+1, y), (x, y-1), (x, y+1)]:
                if nx < 0 or nx >= n or ny < 0 or ny >= n:
                    continue

                cost = dist + graph[nx][ny]

                if cost < distance[nx][ny]:
                    distance[nx][ny] = cost
                    heapq.heappush(q, (cost, nx, ny))

    dijkstra(0, 0)
    print("Problem ", end='')
    print(idx, end='')
    print(": ", end='')
    print(distance[-1][-1])

    idx += 1

# 다익스트라를 이용한 그래프 최소비용 찾기
