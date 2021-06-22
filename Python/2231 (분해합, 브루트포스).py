num = int(input())
answer = 0

for i in range(1, num):
    # 각 자리수의 합과 검사하는 값을 더함
    value = sum(int(n) for n in str(i)) + i

    if value == num:
        answer = i
        break

print(answer)
