class person:
    def __init__(self,name,age,height,weight) -> None:
        self.name=name
        self.age=age
        self.height=height
        self.weight=weight
        
    def eat(self):
        print('polaw vat mangso')
        
class crickter(person):
    def __init__(self, name, age, height, weight,team) -> None:
        super().__init__(name, age, height, weight)
        self.team=team
    
    #overrite the previoy function.the child overrite the parent 
    def eat(self):
        print('Eat healty food')

        
player=crickter("shakib",38,5.7,80,'BD')
player.eat()
