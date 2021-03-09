import math

n,m = map(int,input().split())

# 전체 결과에 round()를 사용하면 계산과정에서 값이 달라지므로 나눌 때 // 를 사용함
print(math.factorial(n)//(math.factorial(n-m)*math.factorial(m)))