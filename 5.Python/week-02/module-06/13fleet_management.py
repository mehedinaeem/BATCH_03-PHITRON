class company:
    def __init__(self,name,address) -> None:
        self.name=name
        self.bus=[]
        self.routes=[]
        self.drivers=[]
        self.counter=[]
        self.manager=[]
        self.supervisor=[]
        self.fare=[]
        
class driver:
    def __init__(self,name,licence,age) -> None:
        self.licence=licence
        self.age=age
        self.name=name 
    
        
class counter:
    def __init__(self) -> None:
        pass
    
    def purchase_a_ticket(self,start,destination):
        pass
    
class passenger:
    pass

class supervisor:
    pass

red_mia=driver('Akkas Ali',1230,32)
print(red_mia.name,red_mia.age)