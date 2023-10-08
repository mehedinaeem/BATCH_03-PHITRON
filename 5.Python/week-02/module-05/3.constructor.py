class phone:
    manufracture='china'
    
    def __init__(self,owner,brand,price):
        self.owner=owner
        self.brand=brand
        self.price=price
        
my_phone=phone('Me','Mi',15000)
print(my_phone.owner,my_phone.brand,my_phone.price,my_phone.manufracture)

Dad_phone=phone('Father','Samsung',10000)
print(Dad_phone.owner,Dad_phone.brand,Dad_phone.price,Dad_phone.manufracture)


her_phone=phone(input('Enter owner Name: '),input('Enter Brand: '),int(input('Enter Price: ')))
print(her_phone.owner,her_phone.brand,her_phone.price)