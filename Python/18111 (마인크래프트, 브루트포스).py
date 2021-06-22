n, m, b = map(int, input().split())
board = [list(map(int, input().split())) for _ in range(n)]
answer = (256*n*m, 0)

# 높이 최대값부터 0까지 검사
for height in range(256, -1, -1):
    fill = 0
    dig = 0

    for i in range(n):
        for j in range(m):
            if height < board[i][j]:
                dig += board[i][j] - height
            elif height > board[i][j]:
                fill += height - board[i][j]

    if b+dig >= fill:
        t = dig*2 + fill

        if (answer[0] > t) or (answer[0] == t and answer[1] < height):
            answer = (t, height)

print(*answer)
