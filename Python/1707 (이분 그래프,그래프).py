from collections import deque

for _ in range(int(input())):
    v, e = map(int, input().split())
    color = [0 for _ in range(v+1)]  # 정점의 색상을 정할 배열
    graph = [[] for _ in range(v+1)]
    ans = "YES"

    for _ in range(e):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)

    def bfs(start):
        global ans
        dq = deque()
        dq.append(start)

        while dq:
            now = dq.popleft()

            for i in graph[now]:
                # 방문 안한 경우 다른 색상 입력
                if color[i] == 0:
                    color[i] = not color[now]
                    dq.append(i)

                # 색상 같은 정점 방문 시 ans = 'NO'
                elif color[i] == color[now]:
                    ans = "NO"
                    return

    for i in range(1, v+1):
        if color[i] == 0:
            bfs(i)

            if ans == "NO":
                break

    print(ans)


# DFS 방식으로 메모리초과 나서 BFS로 풀이하였음
