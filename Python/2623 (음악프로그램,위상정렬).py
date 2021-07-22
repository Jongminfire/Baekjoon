from collections import deque

n, m = map(int, input().split())
indegree = [0] * (n+1)
graph = [[] for _ in range(n+1)]
result = []
dq = deque()

for _ in range(m):
    lst = list(map(int, input().split()))
    size = len(lst)

    for i in range(size-1, 1, -1):
        for j in range(i-1, 0, -1):
            graph[lst[j]].append(lst[i])
            indegree[lst[i]] += 1

for i in range(1, n+1):
    if indegree[i] == 0:
        dq.append(i)

while dq:
    now = dq.popleft()
    result.append(now)

    for i in graph[now]:
        indegree[i] -= 1

        if indegree[i] == 0:
            dq.append(i)

if len(result) == n:
    for i in result:
        print(i)
else:
    # 구성 할 수 없을 경우 (result가 n개가 아닐 때) 0 출력
    print(0)
