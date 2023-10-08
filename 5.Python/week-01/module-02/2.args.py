def all_sum(num1,*numbers):
    print(numbers)
    sum=0
    for i in numbers:
        print(i)
        sum=sum+i
    return sum
    
total=all_sum(10,20,30,40,50)
print('total sum',total)

def do_a_lot(*args):
    print(args)