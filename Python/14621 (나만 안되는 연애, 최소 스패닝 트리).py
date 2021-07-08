n, m = map(int, input().split())
gender = ['']+list(map(str, input().split()))
parent = [i for i in range(n+1)]
edges = []
result = 0


def findParent(v):
    if parent[v] != v:
        parent[v] = findParent(parent[v])
    return parent[v]


def unionParent(a, b):
    if parent[a] != parent[b]:
        a = findParent(a)
        b = findParent(b)

        if a < b:
            parent[b] = a
        else:
            parent[a] = b


for _ in range(m):
    a, b, cost = map(int, input().split())
    # 성별이 다른 경우만 연결
    if gender[a] != gender[b]:
        edges.append((cost, a, b))

edges.sort()

for edge in edges:
    cost, a, b = edge

    if findParent(a) != findParent(b):
        unionParent(a, b)
        result += cost

temp = set(findParent(i) for i in parent[1:])

# 모든 정점의 부모가 같은 경우 (스패닝 트리)만 result 출력
print(result if len(temp) == 1 else -1)
