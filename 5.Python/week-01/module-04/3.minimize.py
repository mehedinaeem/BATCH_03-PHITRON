n = int(input())
ar = [int(x) for x in input().split()]
count = 0

while all(x % 2 == 0 for x in ar):
    ar = [x // 2 for x in ar]
    count += 1

print(count)
