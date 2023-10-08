class shop:
    cart=[]
    
    def __init__(self,buyer):
        self.buyer=buyer
    
    def add_to_cart(self,item):
        self.item=item
        self.cart.append(item)
        
mehjabeen=shop('meh')
mehjabeen.add_to_cart('Pen')
mehjabeen.add_to_cart('jama')
print(mehjabeen.cart)

nisho=shop('nis')
nisho.add_to_cart('watch')
nisho.add_to_cart('book')
print(nisho.cart)

# here the cart is class attribute for that all item added its not change dynamically.
# for change used the instance attribute