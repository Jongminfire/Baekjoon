n = int(input())
lst = list(map(int,input().split()))
dp = [i for i in lst]
dp.insert(0,0)

for i in range(1,len(dp)):
  for j in range(1,len(dp)):
    if i+j < len(dp):
      dp[i+j] = max((dp[i]+dp[j],dp[i+j]))

print(dp[-1])