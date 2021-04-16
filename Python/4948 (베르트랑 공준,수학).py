import math

while True:
    n = int(input())
    cnt = 0

    if n == 0:
        break

    arr = [True for _ in range(n*2+1)]

    # 에라토스테네스의 체
    for i in range(2, int(math.sqrt(n*2))+1):
        if arr[i] == True:
            j = 2
            while i*j <= n*2:
                arr[i*j] = False
                j += 1

    print(arr[n+1:n*2+1].count(True))

# python3 시간초과로 pypy3로 제출함
