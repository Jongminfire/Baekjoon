s = str(input())
stack = []
ans = ""

for i in s:
    # i가 알파벳이면 정답에 바로 추가
    if i.isalpha():
        ans += i
    
    # i가 (면 스택에 추가
    elif i == '(':
        stack.append(i)
    
    # i가 )면 스택에서 (를 만날때 까지 스택에 남은 연산 정답에 추가
    elif i == ')':
        while stack and stack[-1] != '(':
            ans += stack[-1]
            stack.pop()

        # (가 스택에 남아있으면 답에 추가되므로 ( 제거
        stack.pop()
    
    # i가 곱셈이나 나눗셈이면 이전 *이나 /를 만나기 전까지 정답에 추가
    elif i == '*' or i=='/':
        while stack and (stack[-1] == '*' or stack[-1] == '/'):
            ans += stack[-1]
            stack.pop()
        stack.append(i)
    
    # i가 덧셈이나 뺄셈이면 괄호가 닫히기 전까지 연산 정답에 추가
    elif i == '+' or i == '-':
        while stack and stack[-1] != '(':
            ans += stack[-1]
            stack.pop()
        stack.append(i)

# 스택에 남은 연산 정답에 추가
while stack:
  ans += stack[-1]
  stack.pop()

# 정답 출력
print(ans)