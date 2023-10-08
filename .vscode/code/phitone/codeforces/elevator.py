t=int(input())
for a,b,c in range(t):
 a,b,c=map(int,input().split())
time_first=abs(a-1)
time_second=abs(b-1)+abs(c-b)
if time_first<time_second:
    print(1)
elif time_second<time_first:
    print(2)
else:
    print(3)




