import sys
dic = {}

input = sys.stdin.readline

# EOF로 입력 받음
while True:
    # rstrip으로 공백 삭제
    tree = input().rstrip()

    # 입력 없으면 종료
    if not tree:
        break

    if tree in dic:
        dic[tree] += 1
    else:
        dic[tree] = 1

total = sum(dic.values())

# 모든 숫자를 소수 4째자리로 표현해야 하므로 format 써서 4자리수까지 표현
for k in sorted(list(dic.keys())):
    print(k, format(dic[k]/total*100, '.4f'))
