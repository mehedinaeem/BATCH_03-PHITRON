class bank:
    def __init__(self,balance):
       self.balance=balance
       self.min_withdraw=100
       self.max_withdraw=10000
       
    def get_balance(self):
        return self.balance
    
    def deposit(self,amount):
        if amount>0:
            self.balance+=amount
            print(f'your balance is now {self.balance}')
            
    def withdraw(self,amount):
        if amount<self.min_withdraw:
            print(f'Fokira.U can withdraw below {self.min_withdraw}')
            
        elif amount>self.max_withdraw:
            print(f'Bank fokir hoye jabe.U can not with more than {self.max_withdraw}')
            
        else:
            self.balance-=amount
            print(f'here is your money {amount}')
            print(f'your balance after withdraw {self.balance}')#also i use here grt_balance()
            
my_account=bank(15000)
my_account.withdraw(20)
my_account.withdraw(1000000)
my_account.withdraw(1000)
my_account.deposit(50000)
