import sys

input = sys.stdin.readline


# 부모 노드 찾기
def find(x):
    if parent[x] == x:
        return x
    p = find(parent[x])
    parent[x] = p
    return p


# 합집합
def union(x1, x2):
    a = find(x1)
    b = find(x2)

    # x1와 x2의 부모가 다른 경우 a로 합쳐줌
    if a != b:
        parent[b] = a
        cnt[a] += cnt[b]

    # 합한 개수 출력
    print(cnt[a])


for _ in range(int(input())):
    parent = {}
    cnt = {}

    for _ in range(int(input())):
        a, b = map(str, input().split())

        if a not in parent:
            parent[a] = a
            cnt[a] = 1

        if b not in parent:
            parent[b] = b
            cnt[b] = 1

        union(a, b)
