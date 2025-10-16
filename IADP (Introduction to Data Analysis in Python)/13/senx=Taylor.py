#The value of the sinx can be calculated approximately through Taylor series.
#Write a function that, given the number of terms n of the series and the value of x in radians,
#compute the approximate value of sinx using the following expression:

import math

def senx(x, n):
    Sum = 0
    
    for i in range(1, n + 1):
        a = (-1) ** (i + 1)
        b = x ** (2*i - 1)
        c = math.factorial(2*i - 1)
        term = a * (b / c)
        Sum = Sum + term
        
    Sum = round(Sum, 4)
    return Sum

#Test
print(senx(2, 5))