import heapq

n, d = map(int, input().split())
graph = [[] for _ in range(d + 1)]
dist = [i for i in range(d + 1)]

for _ in range(n):
    s, e, c = map(int, input().split())
    # e가 d를 넘지 않는 범위
    if e <= d:
        graph[s].append((e, c))

# 기존 다익스트라와 다르게 0부터 d까지 차례대로 검사
for i in range(d + 1):
    # 지름길을 탄 이후 일 수 있으므로
    dist[i] = min(dist[i], dist[i - 1] + 1)

    for e, c in graph[i]:
        cost = dist[i] + c

        if dist[e] > cost:
            dist[e] = cost

print(dist[d])
