n = int(input())
q = list(map(str, input().split()))
a = list(map(str, input().split()))

dic = {}
cnt = 0

for i, v in enumerate(q):
    dic[v] = i

for i in range(n-1):
    for j in range(i+1, n):
        if dic[a[i]] < dic[a[j]]:
            cnt += 1

# print(cnt,'/',n*(n-1)//2) 로는 오답나옴
print(str(cnt)+'/'+str(n*(n-1)//2))
