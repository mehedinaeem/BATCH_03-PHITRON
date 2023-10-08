# Function
def call():
    print('calling someone I dont know')
    return 'call done'

class phone:
    price=12000
    colour='Black'
    brand='Xaomi'
    features=['camera','speaker','Hammer']
    
    # its not function. its called method
    def call(self):
        print('calling one person')
        return 'call done'
    
    def send_sms(self,phone,sms):
        text=f'Sending sms to: {phone} and message: {sms}'
        return text
my_phone=phone()
print(my_phone.call())
print(call())

print(my_phone.send_sms(1122,'Missy,i missed u'))