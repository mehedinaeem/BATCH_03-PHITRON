class bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name
        self.__balance = initial_deposit
        
    def deposit(self, amount):
        self.__balance += amount
        
    def get_balance(self):
        return self.__balance
    
    def withdraw(self, amount):
        if amount <= self.__balance:
            self.__balance -= amount
            return amount
        else:
            return 'Fokira taka nai'  # Corrected typo here
            
rafsan = bank('choto vai', 1000)
rafsan.deposit(4000)
print(rafsan.holder_name, rafsan.get_balance())
print(rafsan.withdraw(10000))  # Trying to withdraw more than balance
print(rafsan.get_balance())
