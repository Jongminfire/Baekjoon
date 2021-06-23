from collections import deque

for _ in range(int(input())):
    n, m = map(int, input().split())
    dq = deque()
    cnt = 0

    for i, v in enumerate(map(int, input().split())):
        dq.append((v, i))

    while dq:
        max_value = max(dq)
        value = dq.popleft()

        if value[0] != max_value[0]:
            dq.append(value)
        else:
            cnt += 1
            if value[1] == m:
                break

    print(cnt)
