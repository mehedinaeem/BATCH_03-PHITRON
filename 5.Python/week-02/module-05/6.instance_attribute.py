class shop:
    # cart=[]
    # shop='jamuna'
    def __init__(self,buyer):
        self.buyer=buyer
        # use instance attribute
        self.cart=[]
    
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

# for change used the instance attribute