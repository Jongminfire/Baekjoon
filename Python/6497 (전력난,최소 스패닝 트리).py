while True:
    n, m = map(int, input().split())

    # n,m 0일 때까지 반복
    if n == m == 0:
        break

    edges = []
    parent = [0] * (n+1)
    total = 0
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

    for _ in range(m):
        a, b, cost = map(int, input().split())
        edges.append((cost, a, b))
        total += cost

    edges.sort()

    # 크루스칼 알고리즘
    for edge in edges:
        cost, a, b = edge

        if find_parent(a) != find_parent(b):
            union_parent(a, b)
            result += cost

    print(total - result)
