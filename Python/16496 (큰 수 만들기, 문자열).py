n = int(input())
lst = list(map(str, input().split()))

print(int(''.join(sorted(lst, key=lambda x: x*9, reverse=True))))
