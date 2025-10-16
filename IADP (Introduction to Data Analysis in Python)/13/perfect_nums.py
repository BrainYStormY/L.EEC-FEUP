#Write a function that checks if a number is perfect.
#A perfect number is a positive integer number that is equal to the sum of its proper divisors.
#For example, 6 is a perfect number (6 = 1+2+3).

def perfect(n):
    if n <= 0:
        return False
    
    divisors_sum = 0
    
    for i in range(1, n):
        if (n % i) == 0:
            divisors_sum += i
    
    if divisors_sum == n:
        return True
    else:
        return False

#Test
print(perfect(6))