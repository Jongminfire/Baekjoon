al, bl = map(int, input().split())
a, b = set(map(int, input().split())), set(map(int, input().split()))

# a와b의 차집합, b와a의 차집합을 -로 계산
print(len(a-b)+len(b-a))
