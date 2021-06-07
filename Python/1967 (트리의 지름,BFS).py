from collections import deque

n = int(input())
graph = [[] for _ in range(n+1)]
parents = set()
ans = 0

for _ in range(n-1):
    parent, child, cost = map(int, input().split())
    parents.add(parent)
    graph[parent].append((child, cost))
    graph[child].append((parent, cost))

for i in set(i for i in range(1, n+1))-parents:
    visit = [-1 for _ in range(n+1)]
    visit[i] = 0
    dq = deque([i])

    while dq:
        v = dq.popleft()

        for node, cost in graph[v]:
            if visit[node] == -1:
                visit[node] = visit[v] + cost
                dq.append(node)

    ans = max(max(visit), ans)

print(ans)
