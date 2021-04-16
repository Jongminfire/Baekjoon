import math
import sys

input = sys.stdin.readline
arr = [True for _ in range(1000001)]

# 수의 범위가 정해져있고 여러번의 케이스가 반복되므로 에라토스네세의 체를 한번 구하고 반복하지 않음
for i in range(2, int(math.sqrt(1000000))+1):
    if arr[i] == True:
        j = 2
        while i*j <= 1000000:
            arr[i*j] = False
            j += 1

while True:
    n = int(input())

    if n == 0:
        break

    ans = 0

    # 두 수의 간격이 가장 큰 쌍을 찾으므로 찾은 뒤 바로 break
    for i in range(3, n+1):
        if arr[i] == True and arr[n-i] == True:
            ans = i
            break

    if ans == 0:
        # 골드바흐의 추측은 틀리지 않으므로 이 문장은 출력되지 않음
        print("Goldbach's conjecture is wrong.")
    else:
        print(n, '=', ans, '+', n-ans)
