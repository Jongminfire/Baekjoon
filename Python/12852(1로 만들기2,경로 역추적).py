from collections import deque

n = int(input())
INF = int(1e6)+1    # 범위는 10^6까지

visit = [False for _ in range(INF)]  # 방문 여부 검사 리스트
idx = [-1 for _ in range(INF)]  # 인덱스 리스트


def bfs(start):
    visit[start] = 0
    dq = deque()
    dq.append(start)

    while dq:
        num = dq.popleft()

        if num == 1:
            break

        if num % 3 == 0 and num//3 > 0 and visit[num//3] == False:
            if idx[num//3] == -1:
                idx[num//3] = num
            dq.append(num//3)

        if num % 2 == 0 and num//2 > 0 and visit[num//2] == False:
            if idx[num//2] == -1:
                idx[num//2] = num
            dq.append(num//2)

        if num - 1 > 0 and visit[num-1] == False:
            if idx[num-1] == -1:
                idx[num-1] = num
            dq.append(num-1)


# 경로 역추적
def check(num, log):
    if idx[num] != -1:
        log.append(idx[num])
        log = check(idx[num], log)

    return log


bfs(n)
ans = check(1, [1])

print(len(ans)-1)
print(*reversed(ans))

# bfs로 최단거리 찾은 뒤 경로 역추적
