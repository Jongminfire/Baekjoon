from collections import deque
import copy

for _ in range(int(input())):
    n, k = map(int, input().split())
    time = [0] + list(map(int, input().split()))
    indegree = [0] * (n+1)
    graph = [[] for i in range(n+1)]

    for _ in range(k):
        a, b = map(int, input().split())
        graph[a].append(b)
        indegree[b] += 1

    def topologySort():
        # time 값 보존하기 위해 deepcopy
        result = copy.deepcopy(time)
        q = deque()

        for i in range(1, n+1):
            if indegree[i] == 0:
                q.append(i)

        while q:
            now = q.popleft()

            for i in graph[now]:
                # result값 더 작아질 수 있으므로 검사
                result[i] = max(result[i], result[now]+time[i])
                indegree[i] -= 1

                if indegree[i] == 0:
                    q.append(i)

        return result

    w = int(input())
    print(topologySort()[w])
