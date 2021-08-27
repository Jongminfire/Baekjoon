n,k = map(int,input().split())
ans = 0

# 물병의 개수가 주어졌을 때 합칠 수 있는 최대 개수
def check(num):
  temp = 0
  while num != 0:
    temp += num % 2
    num //=  2

  return temp

while True:
  if check(ans+n) <= k:
    break
  ans += 1

print(ans)