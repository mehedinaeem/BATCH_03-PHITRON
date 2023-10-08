class pen:
    manufracture='china'
    
    def __init__(self,owner,brand,price):
        self.owner=owner
        self.brand=brand
        self.price=price
        
my_pen=pen('Me','Matador',7)
print(my_pen.owner,my_pen.brand,my_pen.price,my_pen.manufracture)

