class shopping:
    def __init__(self,name):
        self.name=name
        self.cart=[]
     
    # method 
    def add_to_cart(self,item,price,quantity):
        product={'item':item,'price':price,'quantity':quantity}
        self.cart.append(product)
        
    def checkout(self,amount):
        total=0
        for item in self.cart:
            print(item)
            total+=item['price']*item['quantity']
        print(total)
        if(amount>total):
            print(f'plz take {amount-total} Tk & your product')
        else:
           print(f'u have to pay more money and the amout is {total-amount}') 
        
        
    def remove_from_cart(self):
        for item in self.cart:
            if(item['price']==500):
                self.cart.remove(item)
        
        
swapon=shopping('Alan swapon')
swapon.add_to_cart('Alu',100,5)
swapon.add_to_cart('Dal',500,2)
swapon.add_to_cart('murgi',250,1)

print(swapon.cart)
swapon.remove_from_cart()
swapon.checkout(1500)