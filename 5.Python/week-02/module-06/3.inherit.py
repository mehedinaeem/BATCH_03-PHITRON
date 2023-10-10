class gadget:
    def __init__(self,brand,price,colour) -> None:
        self.brand=brand
        self.price=price
        self.colour=colour
        
    def run(self):
        pass
    

class laptop(gadget):
    def __init__(self,memory,ssd,brand,price,colour) -> None:
        self.ssd=ssd
        self.memory=memory
        super().__init__(brand,price,colour)
        
    def __repr__(self) -> str:
        return f'Laptop {self.brand} {self.price} {self.colour}'
    
    def coding(self):
        return 'learn and practicing'
        
class phone:
    def __init__(self,dual_sim) -> None:
        self.dual_sim=dual_sim
        
    def phn_call(self,number,text):
        return f'sending sms to {number} with {text}'
    
  
class camera(gadget):
    def __init__(self,pixel,brand,price,colour) -> None:
        self.pixel=pixel
        super().__init__(brand,price,colour)
    
    def __repr__(self) -> str:
        return f'camera {self.brand}'
    
    def change_lens(self):
        pass

my_laptop=laptop('Hard disk',156,'Dell',100000,'Black')
print(my_laptop.brand,my_laptop.memory,my_laptop.ssd)
print(my_laptop)

my_camera=camera(50,'Nikon',60000,'blue')
print(my_camera)