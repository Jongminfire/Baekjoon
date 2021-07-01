n, m = map(int, input().split())
edges = []
parent = [0] * (n+1)
result = 0
last = 0    # 마지막 삽입 간선 비용 저장

for i in range(1, n+1):
    parent[i] = i

for _ in range(m):
    a, b, cost = map(int, input().split())
    edges.append((cost, a, b))


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


edges.sort()

for edge in edges:
    cost, a, b = edge

    if find_parent(a) != find_parent(b):
        union_parent(a, b)
        result += cost
        last = cost


# 전체 결과에서 가장 값이 큰 간선 값 제거
print(result - last)
