n = int(input())
num = map(int,input().split())
cnt = 0

def check(num):
  for i in range(2,num):
    if num % i == 0:
      return False
  return True

for i in num:
  if i <= 1:
    continue
  if check(i) == True:
    cnt += 1
  
print(cnt)