
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

if False:
    print("IF OK")
elif True:
    print("ELIF OK")
else:
    print("ELSE OK")

# comment

i = 0
while i != 3:
    print("HELLO WHILE")
    i = i + 1

print("AAA")

l = [1,2,3]

print(l);
