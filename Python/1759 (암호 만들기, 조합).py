from itertools import combinations

# 암호 조건 검사
def check(value,mo):
    cnt = 0

    # 모음 개수 세기
    for i in mo:
        cnt += value.count(i)
    
    # 모음이 1개도 없거나 자음이 최소 2개가 아니라면 False
    if cnt < 1 or len(value) - cnt < 2:
        return False
    
    return True

n,m = map(int,input().split())
lst = list(map(str,input().split()))
mo = []

# 입력받은 문자중에 모음만 따로 빼기
for i in ['a','e','i','o','u']:
  if lst.count(i) != 0:
    mo.append(i)

lst.sort()

for i in sorted(combinations(lst,n)):
  if check(i,mo) == True:
    print(''.join(i))