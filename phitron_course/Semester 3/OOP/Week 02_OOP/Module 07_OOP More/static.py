class Shopping:
    cart = [] # class attribute # static attribute
    origin = 'china'

    def __init__(self, name, location) -> None:
        self.name = 'Jamu na city' # instance attribute
        self.location = 'Jam er maj khane'

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f'buying: {item} for price: {price} and remaining: {remaining}')

    @classmethod
    def hudai_dekhi(self, item):
        print('hudai dekhi kintu kinmu just ac er hawa khaite aschi', item)

basundara = Shopping('basu en dhara', 'not popular location')
# basundara.purchase('lungi', 500, 1000)
basundara.hudai_dekhi('lungi')
# Shopping.purchase( 2, 3, 3)