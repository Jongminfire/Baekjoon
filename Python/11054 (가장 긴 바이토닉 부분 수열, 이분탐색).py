from bisect import bisect_left

n = int(input())
lst = list(map(int, input().split()))
max_length = 1

for i, v in enumerate(lst):
    lowq = [0]  # 오름차순 부분수열
    upq = [-v-1]    # 내림차순 부분수열

    for j in range(i):
        if lowq[-1] < lst[j]:
            lowq.append(lst[j])
        else:
            lowq[bisect_left(lowq, lst[j])] = lst[j]

    for j in range(i, n):
        if upq[-1] < -lst[j]:
            upq.append(-lst[j])
        else:
            upq[bisect_left(upq, -lst[j])] = -lst[j]

    # lst의 값이 중복되는 경우 길이에서 -1
    if lowq[-1] == -upq[1] == v:
        lowq.pop()
    max_length = max(max_length, len(upq)+len(lowq)-2)

print(max_length)
