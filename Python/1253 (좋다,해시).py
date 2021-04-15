n = int(input())
num = list(map(int, input().split()))
dic = {}

# 중복된 숫자도 입력 받을 수 있으므로 dictionary에 개수대로 저장
for i in num:
    if i in dic:
        dic[i] += 1
    else:
        dic[i] = 1

# 0이 포함 되어 있을 경우 (자기 자신의 합은 좋은 숫자로 치지 않기 때문에 따로 계산)
if 0 in dic:
    for v, c in dic.items():
        # 0이 3개 이상일 경우 좋은 숫자로 카운트
        if v == 0:
            if c >= 3:
                dic[0] = 0
        else:
            # 2개 이상이 있을 경우 모두 좋은 숫자로 카운트
            if c >= 2:
                dic[v] = 0

    # 계산을 위해 num에서 0 제거
    while 0 in num:
        num.remove(0)


for i in range(len(num)-1):
    for j in range(i+1, len(num)):
        # 두 수의 합이 dic에 있을 경우 모두 좋은 숫자로 카운트
        if num[i]+num[j] in dic:
            dic[num[i]+num[j]] = 0

# 전체 개수에서 좋은 숫자가 아닌 경우를 빼서 좋은 숫자의 개수 출력
print(n-sum(dic.values()))
