from collections import deque

n = int(input())
indegree = [0] * (n+1)
graph = [[] for i in range(n+1)]
time = [0] * (n+1)
result = [0] * (n+1)
dq = deque()

for i in range(1, n+1):
    temp = list(map(int, input().split()))
    time[i] = temp[0]

    for j in temp[1:-1]:
        graph[j].append(i)
        indegree[i] += 1

for i in range(1, n+1):
    if indegree[i] == 0:
        dq.append(i)
        result[i] = time[i]

while dq:
    now = dq.popleft()

    for i in graph[now]:
        # result[i]와 now를 거쳐 가는 것 비교
        result[i] = max(result[i], result[now]+time[i])
        indegree[i] -= 1

        if indegree[i] == 0:
            dq.append(i)

for i in result[1:]:
    print(i)
