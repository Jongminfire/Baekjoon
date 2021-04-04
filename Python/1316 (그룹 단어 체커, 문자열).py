count = 0

for _ in range(int(input())):
  alpha = [False for _ in range(26)]
  word = str(input())
  last = ''
  check = True

  for i in word:
    if i != last:
      last = i
      if alpha[ord(i)-97]:
        check = False
        break
      else:
        alpha[ord(i)-97] = True
  
  if check:
    count += 1

print(count)