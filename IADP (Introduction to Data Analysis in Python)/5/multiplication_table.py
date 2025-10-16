#For a given integer, print the respective multiplication table (from 1 to 10),
# using a while loop.

n = int(input("n:"))

c = 1
while c <= 10:
    print (f'{n} x {c} = {n*c}')
    c += 1