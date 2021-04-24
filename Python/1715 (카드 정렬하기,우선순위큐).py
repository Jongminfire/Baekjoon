import heapq

hq = []
ans = 0

for i in range(int(input())):
    heapq.heappush(hq, int(input()))

while len(hq) != 1:
    num1 = heapq.heappop(hq)
    num2 = heapq.heappop(hq)

    ans += (num1+num2)

    heapq.heappush(hq, num1+num2)

print(ans)
