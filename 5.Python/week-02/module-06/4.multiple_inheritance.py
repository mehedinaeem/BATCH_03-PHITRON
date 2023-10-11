class family:
    def __init__(self,address):
        self.address=address
        
class school:
    def __init__(self,id,level) -> None:
        self.id=id
        self.level=level
        
class sports:
    def __init__(self,game) -> None:
        self.game=game
        
class student(family,school,sports):
    def __init__(self, address,id,level,game):
        school.__init__(self,id,level)
        sports.__init__(self,game)
        family.__init__(self,address)
        
    def __repr__(self) -> str:
        return f'{self.address} {self.id} {self.level} {self.game}'

rahim=student('Dewpara',22102024,13,'football')
print(rahim.game)
print(rahim)