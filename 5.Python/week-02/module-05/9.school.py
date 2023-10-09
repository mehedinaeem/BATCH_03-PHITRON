class student:
    def __init__(self,name,current_class,id) -> None:
        self.name=name
        self.current_class=current_class
        self.id=id
        
    def __repr__(self) -> str:
        return f'Student name: {self.name} \nClass:{self.current_class} \nId:{self.id}'
        
ula=student('Umma',13,22102038)
print(ula)