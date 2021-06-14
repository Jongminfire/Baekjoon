check = {'c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z='}
words = input()
ans = 0

for c in check:
    ans += words.count(c)

# words의 길이 - 크로아티아 알파벳 개수 = 변환 전 문장의 길이
print(len(words)-ans)
