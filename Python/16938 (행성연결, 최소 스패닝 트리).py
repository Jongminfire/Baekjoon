n = int(input())
edges = []
board = [[]]
parent = [i for i in range(n+1)]
result = 0

for i in range(n):
    temp = list(map(int, input().split()))
    board.append(temp)

# 양뱡향이므로 반쪽만 추가
for i in range(1, n+1):
    for j in range(i+1, n+1):
        edges.append((board[i][j-1], i, j))


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


edges.sort()

for edge in edges:
    cost, a, b = edge

    if findParent(a) != findParent(b):
        unionParent(a, b)
        result += cost
        last = cost

print(result)
