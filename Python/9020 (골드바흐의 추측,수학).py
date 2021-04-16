import math

for _ in range(int(input())):
    n = int(input())
    cnt = 0

    arr = [True for _ in range(n+1)]
    dec = set()  # 소수를 저장하고 검색할 set
    ans = 0

    # 에라토스테네스의 체 사용
    for i in range(2, int(math.sqrt(n))+1):
        if arr[i] == True:
            j = 2
            while i*j <= n:
                arr[i*j] = False
                j += 1

    for i in range(2, n):
        if arr[i]:
            dec.add(i)

    for i in dec:
        # i가 n//2 보다 크면 무시
        if i > n//2:
            continue

        # n-i가 소수 목록에 있을 경우 답 i로 갱신 (최대값 저장)
        if n-i in dec:
            ans = i

    print(ans, n-ans)
