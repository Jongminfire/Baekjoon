from bisect import bisect_left

n = int(input())
vertex = set()
edge = []
q = [1]
dp = [0 for _ in range(n)]
idx = 0

for _ in range(n):
    a, b = map(int, input().split())
    # a 기준으로 삭제하므로 정점은 a만 넣어줌
    vertex.add(a)
    edge.append((a, b))

edge.sort()

# LIS 알고리즘
for i in range(n):
    if q[-1] < edge[i][1]:
        q.append(edge[i][1])
        dp[i] = len(q) - 1
        idx = dp[i]
    else:
        dp[i] = bisect_left(q, edge[i][1])
        q[dp[i]] = edge[i][1]

# 삭제해야 하는 개수이므로 전체에서 LIS 길이 빼줌
print(n - idx)

# 인덱스 역추적으로 LIS 구성 찾기
for i, v in enumerate(reversed(dp)):
    if v == idx:
        # LIS 구성하는 경우 vertex에서 a번호 없애기
        vertex.remove(edge[n-i-1][0])
        idx -= 1

for i in vertex:
    print(i)
