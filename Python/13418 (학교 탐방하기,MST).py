n, m = map(int, input().split())
parent = [0 for _ in range(n + 1)]
edges = []
minCost = 0
maxCost = 0
start = 0


def find_parent(x):
    if parent[x] != x:
        parent[x] = find_parent(parent[x])
    return parent[x]


def union_parent(a, b):
    a = find_parent(a)
    b = find_parent(b)

    if a < b:
        parent[b] = a
    else:
        parent[a] = b


def init_parent():
    for i in range(n + 1):
        parent[i] = i


for _ in range(m + 1):
    a, b, cost = map(int, input().split())
    edges.append((1 if cost == 0 else 0, a, b)) # 0:오르막길, 1:내리막길 이므로 반대로 저장

init_parent()
edges.sort()

# 간선의 오름차순 정렬으로 최소값 구하기
for edge in edges:
    cost, a, b = edge

    if find_parent(a) != find_parent(b):
        union_parent(a, b)
        minCost += cost

init_parent()

# 간선의 내림차순 정렬으로 최대값 구하기
for edge in reversed(edges):
    cost, a, b = edge

    if find_parent(a) != find_parent(b):
        union_parent(a, b)
        maxCost += cost

print(maxCost**2 - minCost**2)
