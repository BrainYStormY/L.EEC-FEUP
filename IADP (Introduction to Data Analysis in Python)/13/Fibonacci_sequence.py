#The Fibonacci sequence is the integer sequence of 0, 1, 1, 2, 3, 5, 8...
#The first two terms are 0 and 1.
#All other terms are obtained by the following expression: Fib(n) = Fib(n-2)+Fib(n-1), n>2.
#Write a function that returns the nth (positive integer) term of the Fibonacci number.

def fibonacci(n):
    if n == 1:
        return 0
    else:
        if n == 2:
            return 1
        else:
            return fibonacci(n - 2) + fibonacci(n - 1)
    

#Test
print(fibonacci(6))