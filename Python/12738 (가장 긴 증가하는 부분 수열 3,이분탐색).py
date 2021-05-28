from bisect import bisect_left

n = int(input())
lst = list(map(int, input().split()))

q = [-1000000001]

for i in lst:
    if q[-1] < i:
        q.append(i)
    else:
        # lower_bound 대신 bisect_left 사용
        q[bisect_left(q, i)] = i

print(len(q)-1)
