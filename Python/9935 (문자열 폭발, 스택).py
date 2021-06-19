s = input()
b = list(input())
size = len(b)
stack = []

for i in range(len(s)):
    if len(stack) >= size:
        if stack[-size:] == b:
            for _ in range(size):   # 슬라이싱 등의 방식대신 시간복잡도 o(1)인 스택 pop을 사용
                stack.pop()

    stack.append(s[i])

# 마지막 결과에서 한번더 검사
if stack[-size:] == b:
    for _ in range(size):
        stack.pop()

if stack:
    print(''.join(stack))
else:
    print('FRULA')
