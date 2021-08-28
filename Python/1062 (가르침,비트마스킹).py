from itertools import combinations

n,k = map(int,input().split())
s = set(['a','c','n','t','i'])
words = [set(input()[4:-4])-s for _ in range(n)]
remain = k - 5
ans = 0

# word 이진수로 변환
def binary(word):
  temp = 0b0
  for w in word:
    temp |= (1 << (ord(w)-97))  # (a:1 - z:25)
  return temp

if remain >= 0:
  # a,c,n,t,i를 제외한 알파벳에서 k-5만큼의 조합 구하기
  for c in combinations(['b','d','e','f','g','h','j','k','l','m','o','p','q','r','s','u','v','w','x','y','z'],remain):
    temp = set(c)
    combBin = binary(temp)
    cnt = 0

    for w in words:
      # binary(w) 차집합 combBin이 0일경우 만족
      if binary(w) & (~combBin) == 0:
        cnt += 1

    ans = max(cnt,ans)

print(ans)