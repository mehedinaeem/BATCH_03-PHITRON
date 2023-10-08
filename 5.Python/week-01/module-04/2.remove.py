n = int(input())
a = list(map(int, input().split()))

dic = {}
for i in a:
    if i in dic:
        dic[i]+=1
    else:
        dic[i] = 1
ans = 0
for i in dic:
    if i < dic[i]:
        ans += (dic[i] - i)
    elif i > dic[i]:
        ans +=  dic[i]
print(ans)