from itertools import combinations

n, m = map(int, input().split())
board = [list(map(int, input().split())) for _ in range(n)]
house = []
chicken = []
ans = int(1e9)

for i in range(n):
    for j in range(n):
        if board[i][j] == 1:
            house.append((i, j))
        if board[i][j] == 2:
            chicken.append((i, j))

for c in combinations(chicken, m):
    temp = [2500 for _ in range(len(house))] # 최대 치킨 거리는 50x50

    for i, (hx, hy) in enumerate(house):
        for cx, cy in c:
            temp[i] = min(abs(hx-cx)+abs(hy-cy), temp[i])

    ans = min(ans, sum(temp))

print(ans)
