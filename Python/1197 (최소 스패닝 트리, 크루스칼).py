v, e = map(int, input().split())
parent = [0] * (v+1)
edges = []
result = 0

# 모든 노드 부모 자신으로 초기화
for i in range(1, v+1):
    parent[i] = i


# 부모 검색
def find_parent(x):
    if parent[x] != x:
        parent[x] = find_parent(parent[x])
    return parent[x]


# 합집합
def union_parent(a, b):
    a = find_parent(a)
    b = find_parent(b)

    if a < b:
        parent[b] = a
    else:
        parent[a] = b


for _ in range(e):
    a, b, cost = map(int, input().split())
    edges.append((cost, a, b))  # 간선 비용 순으로 정렬하기 위해 cost,a,b 순으로 edges에 저장

# 최소 비용 간선순으로 정렬
edges.sort()

for edge in edges:
    cost, a, b = edge

    # 사이클이 생성되지 않는 경우
    if find_parent(a) != find_parent(b):
        union_parent(a, b)
        result += cost

print(result)
