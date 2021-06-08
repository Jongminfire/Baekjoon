import sys
sys.setrecursionlimit(int(1e9))

n = int(input())
inorder = list(map(int, input().split()))
postorder = list(map(int, input().split()))
idx = [0 for _ in range(n+1)]


def preorder(in_s, in_e, po_s, po_e):
    # inorder와 postorder의 시작과 끝이 겹치면 종료
    if in_s > in_e or po_s > po_e:
        return

    # postorder의 마지막은 항상 부모노드이므로 바로 출력
    parent = postorder[po_e]
    print(parent, end=' ')

    # 부모노드 보다 앞 범위의 inorder, postorder 검사
    preorder(in_s, idx[parent]-1, po_s, po_s+idx[parent]-in_s-1)

    # 부모노드 보다 뒷 범위의 inorder, postorder 검사
    preorder(idx[parent]+1, in_e, po_s+idx[parent]-in_s, po_e-1)


# inorder 기준으로 인덱스 저장
for i in range(n):
    idx[inorder[i]] = i

# n개의 정점이므로 (0,n-1) 범위 검사
preorder(0, n-1, 0, n-1)

# pypy3로 메모리초과 나서 python3로 제출하였음
