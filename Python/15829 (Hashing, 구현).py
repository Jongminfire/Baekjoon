n = int(input())
temp = 1
answer = 0

for i, v in enumerate(input()):
    num = ((ord(v)-96)*(temp)) % 1234567891
    temp *= 31
    # 중간에 오버플로우 발생 할 수 있으므로 answer도 나누어줌
    answer = (answer + num) % 1234567891

print(answer)
