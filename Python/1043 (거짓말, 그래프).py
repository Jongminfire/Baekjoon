n,m = map(int,input().split())
truth = list(map(int,input().split()))
party = [list(map(int,input().split())) for _ in range(m)]
visit = [False for _ in range(n+1)]     # 방문 검사
answer = 0

# 필요없는 맨 앞수 제거
del truth[0]
for i in party:
  del i[0]

# 방문확인
def check(start,party,visit):
  visit[start] = True

  for i in range(len(party)):
      if party[i].count(start) != 0:
          for j in party[i]:
              if visit[j] == False:
                check(j,party,visit)
        # party[i]가 start를 포함하면 party 없앰
        party[i] = [-1]

for i in truth:
    check(i,party,visit)

# 남아있는 party 개수 세기
for i in party:
    if i[0] != -1:
        answer += 1

print(answer)
