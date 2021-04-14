s = str(input())
dic = {}

for i in range(1,len(s)+1):
  for j in range(len(s)-i+1):
    if s[j:j+i] not in dic:
      dic[s[j:j+i]] = 1

print(len(dic))