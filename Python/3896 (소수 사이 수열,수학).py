import math

# 각각의 정수는 1보다 크고 1299707와 작거나 같다
INF = 1299709
arr = [True for _ in range(INF+1)]

# 여러 케이스 반복하므로 전범위에 에라토스네테스의 체 한번 실행
for i in range(2, int(math.sqrt(INF))+1):
    if arr[i] == True:
        j = 2
        while i*j <= INF:
            arr[i*j] = False
            j += 1

for _ in range(int(input())):
    k = int(input())
    s, e = k-1, k+1

    if arr[k] == True:
        print(0)
        continue

    while arr[s] == False:
        if s <= 0:
            break
        s -= 1

    while arr[e] == False:
        if e >= INF:
            break
        e += 1

    print(e-s)
