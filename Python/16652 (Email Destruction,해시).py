n,k = map(int,input().split())
dic = {}

for _ in range(k):
  mail = str(input()).split('Re: ')

  if mail[-1] in dic:
    dic[mail[-1]] = max(dic[mail[-1]],len(mail))
  
  else:
    dic[mail[-1]] = len(mail)

print('YES' if n >= sum(dic.values()) else 'NO')