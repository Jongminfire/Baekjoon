for i in range(int(input())):
  n = int(input())
  sticker = []
  for i in range(2):
    lst = list(map(int,input().split()))
    lst.insert(0,0)
    sticker.append(lst)

  dp = [[0 for _ in range(len(sticker[0]))] for _ in range(2)]

  dp[0][1] = sticker[0][1]
  dp[1][1] = sticker[1][1]

  dp[0][2] = dp[1][1]+sticker[0][2]
  dp[1][2] = dp[0][1]+sticker[1][2]

  for i in range(3,len(sticker[0])):
    dp[0][i] = max(dp[0][i-2],dp[1][i-1],dp[1][i-2])+sticker[0][i]  # 같은 줄의 2칸 전, 다른 줄의 1칸과 2칸전 중 가장 큰 값 비교
    dp[1][i] = max(dp[1][i-2],dp[0][i-1],dp[0][i-2])+sticker[1][i]

  print(max(dp[0][-1],dp[1][-1],dp[0][-2],dp[1][-2]))