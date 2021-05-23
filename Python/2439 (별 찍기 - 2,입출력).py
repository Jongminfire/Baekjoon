n = int(input())

for i in range(n):
    for _ in range(i, n-1):
        print(' ', end='')
    for _ in range(n-i, n+1):
        print('*', end='')
    print('')
