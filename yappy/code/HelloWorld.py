
class sData:
    def __init__(self):
        self.a = 345
    
    def show(self):
        print(self.a)
        print(self.b)

data = sData()
data.b = 345

data.show()

def fun(a):
    print(a)
    return 123

b = fun(123)

print(b)
