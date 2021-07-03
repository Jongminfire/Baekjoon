import math

n = int(input())
parent = [0] * (n+1)
points = []
edges = []
result = 0

for i in range(n):
    parent[i] = i

for _ in range(n):
    x, y = map(float, input().split())
    points.append((x, y))

# 모든 정점에 대해 거리 계산 후 edges에 저장
for i in range(n):
    for j in range(i, n):
        if i != j:
            x = points[i][0]-points[j][0]
            y = points[i][1]-points[j][1]
            cost = round(math.sqrt(x**2+y**2), 2)

            edges.append((cost, i, j))

edges.sort()


def find_parent(v):
    if parent[v] != v:
        parent[v] = find_parent(parent[v])
    return parent[v]


def union_parent(a, b):
    if parent[a] != parent[b]:
        a = find_parent(a)
        b = find_parent(b)

        if a < b:
            parent[b] = a
        else:
            parent[a] = b


# 크루스칼 알고리즘
for edge in edges:
    cost, a, b = edge

    if find_parent(a) != find_parent(b):
        union_parent(a, b)
        result += cost

print(result)
