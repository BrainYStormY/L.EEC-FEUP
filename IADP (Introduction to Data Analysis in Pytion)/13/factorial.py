#Write a function to calculate the factorial of an integer n.

def fact(n):
    if n == 0:
        return 1
    else:
        return fact(n - 1) * n

#Test
print(fact(5))