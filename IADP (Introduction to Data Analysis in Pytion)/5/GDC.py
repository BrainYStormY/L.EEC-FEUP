#Determine the greatest common factor (GDC) of two integers using a while loop.

v1 = int(input("value1:"))
v2 = int(input("value2:"))

if v1 > v2:
    cap = v2
else:
    cap = v1

num = 1
gdc = 1
while num <= cap:
    if v1 % num == 0:
        if v2 % num == 0:
            gdc = num
    num += 1

print (f'the greatest common factor of {v1} and {v2} is {gdc}')