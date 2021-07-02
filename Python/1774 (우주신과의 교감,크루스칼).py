import math

n, m = map(int, input().split())
edges = []
excep = set()
points = []
parent = [0] * (n+1)
result = 0


def find_parent(a):
    if parent[a] != a:
        parent[a] = find_parent(parent[a])
    return parent[a]


def union_parent(a, b):
    if parent[a] != parent[b]:
        a = find_parent(a)
        b = find_parent(b)

        if a < b:
            parent[b] = a
        else:
            parent[a] = b


for i in range(1, n+1):
    parent[i] = i

for _ in range(n):
    x, y = map(int, input().split())
    points.append((x, y))

for _ in range(m):
    a, b = map(int, input().split())
    excep.add((a, b))


# 제외하는 케이스 빼고 모든 정점에 대한 간선 거리 계산
for i in range(n):
    for j in range(i+1, n):
        if i == j or ((i+1, j+1) in excep or (j+1, i+1) in excep):
            continue
        x = points[i][0] - points[j][0]
        y = points[i][1] - points[j][1]
        cost = math.sqrt(x**2+y**2)
        edges.append((cost, i+1, j+1))

edges.sort()

# 제외 정점들 parent 합치기
for a, b in excep:
    union_parent(a, b)


# 크루스칼 알고리즘
for edge in edges:
    cost, a, b = edge

    if find_parent(a) != find_parent(b):
        union_parent(a, b)
        result += cost

print('%.2f' % result)
