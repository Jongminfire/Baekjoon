n = int(input())
lst = list(map(int, input().split()))

lst.sort()
answer = [lst[0], lst[-1]]

start = 0
end = len(lst)-1

while start < end:
    if abs(lst[end] + lst[start]) < abs(answer[1] + answer[0]):
        answer = [lst[start], lst[end]]

    if lst[end] + lst[start] > 0:
        end -= 1
    else:
        start += 1

for i in answer:
    print(i, end=' ')
