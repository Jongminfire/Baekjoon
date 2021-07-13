import heapq

n, m = map(int, input().split())
indegree = [0] * (n+1)
graph = [[] for i in range(n+1)]
result = []
hq = []

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    indegree[b] += 1

for i in range(1, n+1):
    if indegree[i] == 0:
        heapq.heappush(hq, i)

while hq:
    # 진입차수가 0인 노드중 가장 번호가 빠른 것 부터
    idx = heapq.heappop(hq)
    result.append(idx)

    for i in graph[idx]:
        indegree[i] -= 1
        if indegree[i] == 0:
            heapq.heappush(hq, i)

print(*result)
