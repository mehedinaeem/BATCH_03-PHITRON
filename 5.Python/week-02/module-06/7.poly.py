class animal:
    def __init__(self,name) -> None:
        self.name=name
        
    def make_sound(self):
        print('Animal making some sound')
        
class cat(animal):
    def __init__(self, name) -> None:
        super().__init__(name)
        
    def make_sound(self):
        print('meow meow')
        
class dog(animal):
    def __init__(self, name) -> None:
        super().__init__(name)
        
    def make_sound(self):
        print('ghew ghew')
        
class goat(animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    
        
        
biral=cat('Tom')
biral.make_sound()

shepard=dog('jarman shepard')
shepard.make_sound()

mess=goat('pikku')
mess.make_sound()

less=goat('gora gori')

animals=[biral,shepard,mess,less]
for i in animals:
    i.make_sound()