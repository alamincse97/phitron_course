def call():
    print('calling someone i dont know')
    return 'call done'

class phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'
    features = ['camera', 'speaker', 'hammer']

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'sending SMS to: {phone} and message: {sms}'
        return text

my_phone = phone()
print(my_phone.features)
my_phone.call()
result = my_phone.send_sms(41524, 'I forgor to miss you')
print(result)