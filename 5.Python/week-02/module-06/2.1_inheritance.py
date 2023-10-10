class laptop:
    def __init__(self,brand,price,colour,memory) -> None:
        self.brand=brand
        self.price=price
        self.colour=colour
        self.memory=memory
    def run(self):
        return f'running laptop {self.brand}'
    
    def coding(self):
        return 'learn and practicing'
        
class phone:
    def __init__(self,brand,colour,dual_sim) -> None:
        self.brand=brand
        self.colour=colour
        self.dual_sim=dual_sim
        
    def phn_call(self,number,text):
        return f'sending sms to {number} with {text}'
    
    def run(self):
        return f'phn tipatipi kore'
    
class camera:
    def __init__(self,brand,price,colour,pixel) -> None:
        self.brand=brand
        self.price=price
        self.colour=colour
        self.pixel=pixel
        
    def run(self):
        pass
    
    def change_lens(self):
        pass

#here a few common & uncommon functionality avaiable.we can handle it using inheritance