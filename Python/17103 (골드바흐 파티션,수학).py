import math

arr = [True for _ in range(1000001)]

# 여러 케이스를 계산하므로 에라토스테네스 전체 범위로 한번만 수행
for i in range(2, int(math.sqrt(1000000))+1):
    if arr[i] == True:
        j = 2
        while i*j <= 1000000:
            arr[i*j] = False
            j += 1

for _ in range(int(input())):
    n = int(input())
    cnt = 0

    # 중복 될 수 있으므로 n의 절반까지 검사
    for i in range(2, n//2+1):
        if arr[i] == True and arr[n-i] == True:
            cnt += 1

    print(cnt)
