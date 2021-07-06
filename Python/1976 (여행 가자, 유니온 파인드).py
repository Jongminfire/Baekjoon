n = int(input())
m = int(input())
parent = [i for i in range(n+1)]


def findParent(v):
    if parent[v] != v:
        parent[v] = findParent(parent[v])
    return parent[v]


def unionParent(a, b):
    a = findParent(a)
    b = findParent(b)

    if a < b:
        parent[b] = a
    else:
        parent[a] = b


for a in range(1, n+1):
    for b, v in enumerate(list(map(int, input().split()))):
        # 연결 되있을 경우 합집합
        if v == 1:
            unionParent(a, b+1)

result = set({findParent(i) for i in list(map(int, input().split()))})

# 여행 계획의 부모 집합이 1개 이상일 경우 NO
if len(result) != 1:
    print("NO")
else:
    print("YES")
