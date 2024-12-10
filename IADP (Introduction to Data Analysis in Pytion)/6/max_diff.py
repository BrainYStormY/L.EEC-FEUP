#Given a list of N values calculate the greatest difference between two consecutive values using a for loop.

n = int(input("n:"))

v1 = int(input("value 1:"))
max_diff = 0

for i in range(2, n + 1, 1):
    v2 = int(input("value " + str(i) +":"))
    
    if v2 - v1 > max_diff:
        max_diff = v2 - v1
    if v1 - v2 > max_diff:
        max_diff = v1 - v2
    
    v1 = v2

print(f'Maximum difference = {max_diff:.2f}')