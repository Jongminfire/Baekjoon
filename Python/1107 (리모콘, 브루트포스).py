from itertools import product

n = int(input())
m = int(input())
ans = abs(n-100)  # 100에서 +,-로 n까지 가는 경우
normal = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

# m이 0인 경우 입력을 받지 않음 (EOF error 해결)
if m != 0:
    normal -= set(map(int, input().split()))

# 채널 범위가 500000이기 때문에 1부터 6 범위에서 검사
for size in range(1, 7):
    for i in list(product(normal, repeat=size)):
        num = int(''.join(list(str(j) for j in i)))
        ans = min(ans, abs(num-n)+size)

print(ans)
