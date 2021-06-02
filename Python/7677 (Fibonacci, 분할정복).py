init = [[1, 1], [1, 0]]


def multi(m1, m2):
    ans = []
    for i in range(len(m1)):
        lst = []
        for j in range(len(m2[0])):
            temp = 0
            for k in range(len(m1[0])):
                temp += m1[i][k] * m2[k][j]
            lst.append(temp % 10000)
        ans.append(lst)

    return ans


def squared(matrix, p):
    if p == 0:
        return [[0, 0]]
    if p == 1:
        return matrix

    div = squared(matrix, p//2)
    squared_div = multi(div, div)

    if p % 2 == 0:
        return squared_div
    else:
        return multi(squared_div, matrix)


while True:
    n = int(input())

    if n == -1:
        break

    print(squared(init, n)[0][1])

# -1가 나올때까지 n번째 피보나치수 구하기
