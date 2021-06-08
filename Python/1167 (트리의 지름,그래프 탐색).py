from collections import deque

n = int(input())
graph = [[] for _ in range(n+1)]

for _ in range(n):
    nodes = list(map(int, input().split()))
    start = nodes[0]
    idx = 1

    while True:
        if nodes[idx] == -1:
            break

        graph[start].append((nodes[idx], nodes[idx+1]))
        idx += 2


def bfs(start):
    visit = [-1 for _ in range(n+1)]
    visit[start] = 0
    dq = deque([start])
    max_v = start
    max_dist = 0

    while dq:
        v = dq.popleft()

        for node, cost in graph[v]:
            if visit[node] == -1:
                visit[node] = visit[v] + cost
                dq.append(node)

                if visit[node] > max_dist:
                    max_dist = visit[node]
                    max_v = node

    return (max_v, max_dist)


# 임의의 한 정점에서 가장 먼 정점 구하기
farthest_v = bfs(1)[0]

# 가장 먼 정점으로 부터 가장 먼 노드와의 거리 출력
print(bfs(farthest_v)[1])
