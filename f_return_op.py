import random

def func(op):
    ot = {
        '+':lambda a,b:a + b,
        '-':lambda a,b:a - b,
        '*':lambda a,b:a * b,
        '/':lambda a,b:a / b,
        '**':lambda a ,b:a ** b}
    return ot[op]

for i in range(10):
    op =random.choice(['+','-','*','/','**'])
    a =random.randrange(1,99)
    b =random.randrange(1,99)
    fx=func(op)
    print(f'{a:5} {op:5} {b:5} = {fx(a,b):5}')