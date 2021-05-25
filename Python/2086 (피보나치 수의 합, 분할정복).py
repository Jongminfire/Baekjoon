a, b = map(int, input().split())
init = [[1, 1], [1, 0]]
ans = 0


def multi(m1, m2):
    ans = []
    for i in range(len(m1)):
        lst = []
        for j in range(len(m2[0])):
            temp = 0
            for k in range(len(m1[0])):
                temp += m1[i][k] * m2[k][j]
            lst.append(temp % 1000000000)
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


# n까지의 피보나치 수열의 합은 F(n+2)-1 이므로 (F(b+2)-1)-(F(a+1)-1)로 a부터 b까지의 합 구함
print((squared(init, b+2)[0][1]-squared(init, a+1)[0][1]) % 1000000000)
