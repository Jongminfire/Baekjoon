import sys

for _ in range(int(sys.stdin.readline())):
    import heapq

    k = int(sys.stdin.readline())
    minq = []
    maxq = []
    visit = [False] * (1000001)  # 연산의 방문 검사하기 위한 배열 (범위 k ≤ 1,000,000)

    for i in range(k):
        oper, num = map(str, sys.stdin.readline().split())

        if oper == 'I':
            heapq.heappush(minq, (int(num), i))     # (수,연산 idx)
            heapq.heappush(maxq, (-int(num), i))    # (수,연산 idx)
            visit[i] = True

        else:
            if int(num) == -1:
                # 방문하지 않은 최소힙 남아있을 때 까지 최소 힙 제거
                while minq and not visit[minq[0][1]]:
                    heapq.heappop(minq)
                if minq:
                    visit[minq[0][1]] = False
                    heapq.heappop(minq)
            else:
                # 방문하지 않은 최대힙 남아있을 때 까지 최대 힙 제거
                while maxq and not visit[maxq[0][1]]:
                    heapq.heappop(maxq)
                if maxq:
                    visit[maxq[0][1]] = False
                    heapq.heappop(maxq)

    while minq and not visit[minq[0][1]]:
        heapq.heappop(minq)

    while maxq and not visit[maxq[0][1]]:
        heapq.heappop(maxq)

    if minq:
        print(-maxq[0][0], minq[0][0])
    else:
        print("EMPTY")
