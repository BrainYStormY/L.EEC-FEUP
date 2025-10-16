n = int(input("n:"))

primes = 0
notprime = bool(0)

for i in range(1, n + 1, 1):
    notprime = 0
    val = int(input("value " + str(i) + ":"))
    for i in range (2, val, 1):
        if val % i == 0:
            notprime = 1
            break
    if notprime:
        print(f'{val} is not prime')
    else:
        primes += 1
        print(f'{val} is prime')

print("Results:")
print(f'{primes} primes')
