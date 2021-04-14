s,e,q = map(str,input().split())
dic = {}
cnt = 0

# 입력이 끝날 때 까지 받아야 하므로 EOF 처리
while True:
  try:
    t,user = map(str, input().split())
    
    if t[:2] <= s[:2]:
      if t[:2] == s[:2] and t[-2:] > s[-2:]:
        continue
      
      if user not in dic:
        dic[user] = 1

    if e[:2] <= t[:2] and t[:2] <= q[:2]:
      if e[:2] == t[:2] and e[-2:] > t[-2:]:
        continue
      elif q[:2] == t[:2] and q[-2:] < t[-2:]:
        continue
      
      if user in dic:
        dic.pop(user)
        cnt += 1

  except EOFError:
    break

print(cnt)