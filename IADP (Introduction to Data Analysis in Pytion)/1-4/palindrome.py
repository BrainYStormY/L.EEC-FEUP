#Given an integer with four digits determine if it is a palindrome.

number = int(input("integer with four digits:"))
num = number

digit1 = int(num / 1000)

num %= 1000
digit2 = int(num / 100)

num %= 100
digit3 = int(num / 10)

num %= 10
digit4 = num

if digit1 == digit4 and digit2 == digit3:
    print ("Yes")
else:  
    print ("No")