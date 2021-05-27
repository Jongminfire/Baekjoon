n = int(input())
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
            lst.append(temp % 1000000007)
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


# 홀수일 경우 n+1 검사
if n % 2 == 1:
    n += 1

# 홀수번째 피보나치 수의 합은 F(n+1)
print(squared(init, n)[0][1])
