import sys

sys.setrecursionlimit(int(1e6))
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    select = list(map(int, input().split()))
    visit = [False for _ in range(n)]
    team = []

    def dfs(v, temp):
        global team
        visit[v-1] = True
        temp.append(v)

        if visit[select[v-1]-1]:
            if select[v-1] in temp:
                # 중간에 사이클 완성되는 경우 있기 때문에 temp를 리스트로 받고 슬라이싱해서 team에 더해줌
                team += temp[temp.index(select[v-1]):]
            return
        else:
            dfs(select[v-1], temp)

    for i in range(1, n+1):
        if not visit[i-1]:
            dfs(i, [])

    # 전체 인원 수에서 team 결성 인원 빼기
    print(n-len(team))
