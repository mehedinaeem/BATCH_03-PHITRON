def alu():
    return 2,3
r=alu()
print(r)
print(type(r))

things='pen','tripod','mbl','kodu','canacur','jam'
print(things[0])
print(things)
print(type(things))
print(things[2:5])
print(things[-5:-2])
for item in things:
    print(item)
    
print(len(things))

if('mbl' in things):
    print('exicts')
    
if('mbl khan' in things):
    print('exicts')
else:
    print('not exicts')
    
mega=([1,2,3],[4,5,6])
print(mega)
print(mega[0])
mega[0][2]=666
print(mega)