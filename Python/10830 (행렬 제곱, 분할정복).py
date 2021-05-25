n, count = map(int, input().split())
init = [list(map(int, input().split())) for _ in range(n)]
ans = 0

# 수의 범위 1000 초과하면 0으로 변경
for i in range(n):
    for j in range(n):
        if init[i][j] >= 1000:
            init[i][j] = 0


def multi(m1, m2):
    ans = []
    for i in range(len(m1)):
        lst = []
        for j in range(len(m2[0])):
            temp = 0
            for k in range(len(m1[0])):
                temp += m1[i][k] * m2[k][j]
            lst.append(temp % 1000)
        ans.append(lst)

    return ans


def squared(matrix, p):
    if p == 1:
        return matrix

    div = squared(matrix, p//2)
    squared_div = multi(div, div)

    if p % 2 == 0:
        return squared_div
    else:
        return multi(squared_div, matrix)


for i in squared(init, count):
    print(*i)
