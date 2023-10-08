n=int(input())
dig=input().strip()
s=0
while(n>0):
    x=dig%10
    s=s+x
    dig=dig//10
    n=n-1
print(s)

# def sum_of_digits(N, digits):
#     total = 0
#     for digit in digits:
#         total += int(digit)
#     return total

# # Read input
# N = int(input())
# digits = input().strip()

# # Call the function and print the result
# result = sum_of_digits(N, digits)
# print(result)
