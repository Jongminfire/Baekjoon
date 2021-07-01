n = int(input())
m = int(input())
parent = [0] * (n+1)
edges = []
result = 0

for i in range(1, n+1):
    parent[i] = i


def find_parent(n):
    if parent[n] != n:
        parent[n] = find_parent(parent[n])
    return parent[n]


def union_parent(a, b):
    if parent[a] != parent[b]:
        a = find_parent(a)
        b = find_parent(b)

        if a < b:
            parent[b] = a
        else:
            parent[a] = b


for _ in range(m):
    a, b, cost = map(int, input().split())
    edges.append((cost, a, b))

edges.sort()


# 크루스칼 알고리즘
for edge in edges:
    cost, a, b = edge

    if find_parent(a) != find_parent(b):
        union_parent(a, b)
        result += cost

print(result)
