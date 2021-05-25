n = int(input())
init = [[1, 1], [1, 0]]  # Fn = ([[1,1],[1,0]])^n[0][1]


# m1과 m2 행렬의 곱셈
def multi(m1, m2):
    ans = []
    for i in range(len(m1)):
        lst = []
        for j in range(len(m2[0])):
            temp = 0
            for k in range(len(m1[0])):
                temp += m1[i][k] * m2[k][j]
            lst.append(temp % 1000000007)
        ans.append(lst)

    return ans


def squared(matrix, p):
    if p == 1:
        return matrix

    div = squared(matrix, p//2)
    squared_div = multi(div, div)

    # p가 짝수면 div^2 반환
    if p % 2 == 0:
        return squared_div
    # p가 홀수면 div^3 반환
    else:
        return multi(squared_div, matrix)


print(squared(init, n)[0][1])
