n = input()
cnt = 0

if int(n) < 10:
    n = n+'0'
init = n[:]

while True:
    temp = int(n[0])+int(n[1])
    n = int(n)-int(n)//10*10
    n = str(n)+str(temp)[-1]
    cnt += 1

    if init == n and cnt > 0:
        break

print(cnt)
