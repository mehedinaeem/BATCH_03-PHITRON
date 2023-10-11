from abc import ABC,abstractclassmethod
#abstract base class

class animal(ABC):
    @abstractclassmethod # enforce all derived class to have a eat method
    def eat(self):
        return f'i need food'
    
    def move(self):
        pass
    
class monkey(animal):
    def __init__(self,name) -> None:
        super().__init__()
        self.name=name
        self.caegory='monkey'
        
    def eat(self):
        print('hey naina')
        
    def move(self):
        print('Hanging on the branches')
        
layka=monkey('lucky')
print(layka.name)
layka.eat()
layka.move()


# copy from phitronio

print('\nits from phitron')

from abc import ABC, abstractmethod
# abstract base class
class Animal(ABC):
    @abstractmethod #enforce all derived class to have a eat method
    def eat(self):
        print('I need food')
    
    @abstractmethod
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self, name) -> None:
        self.category = 'Monkey'
        self.name = name
        super().__init__()

    def eat(self):
        print('Hey na nana, I am eating banana')
    def move(self):
        print('Hanging on the branches')

layka = Monkey('lucky')
layka.eat()