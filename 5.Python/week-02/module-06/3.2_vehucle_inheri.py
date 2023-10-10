class vehicle:
    def __init__(self,name,price) -> None:
        self.name=name
        self.price=price
        
    def move(self):
        pass
    
class bus(vehicle):
    def __init__(self, name, price,seat) -> None:
        super().__init__(name, price)
        self.seat=seat
        
class truck(vehicle):
    def __init__(self, name, price,weight) -> None:
        self.weight=weight
        super().__init__(name, price)
        
class pick_up_van(truck):
    def __init__(self, name, price, weight) -> None:
        super().__init__(name, price, weight)
        
class ac_bus(bus):
    def __init__(self, name, price, seat) -> None:
        super().__init__(name, price, seat)
        
    def __repr__(self) -> str:
        return f'{self.name,self.price,self.seat}'
        return super().__repr__()
        


green_line=ac_bus('Green',1000000,80)
print(green_line)