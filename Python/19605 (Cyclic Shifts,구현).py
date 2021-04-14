t = str(input())
s = str(input())
check = False

for _ in range(len(s)):
  if s in t:
    check = True
    break
  else:
    s = s[1:]+s[0]

print('yes' if check else 'no')