from collections import defaultdict

n = int(input())
tree = defaultdict(list)
parents = list(map(int, input().split()))
cnt = 0

for i, v in enumerate(parents):
    tree[v].append(i)


# 부모와 자식 노드 삭제
def delete_node(node):
    if node not in tree:
        return

    for i in tree[node]:
        delete_node(i)

    del tree[node]


# 단말노드 개수 세기
def count_leaf(node):
    global cnt

    # 단말노드이며 삭제되는 노드가 아닐 때, 삭제되는 노드에 의해 단말노드가 될 때
    if (node not in tree and delnode != node) or (len(tree[node]) == 1 and tree[node][0] == delnode and node != -1):
        cnt += 1
        return

    for i in tree[node]:
        count_leaf(i)


delnode = int(input())
delete_node(delnode)
count_leaf(-1)

print(cnt)
