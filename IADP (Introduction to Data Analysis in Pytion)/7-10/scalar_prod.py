#Calculate the scalar product of two vectors.

size = int(input())

v1 = list()

for i in range(0, size, 1):
    v1.append(int(input()))
    
v2 = list()

for i in range(0, size, 1):
    v2.append(int(input()))
    
scalar_prod = 0

for i in range(0, size, 1):
    scalar_prod += v1[i] * v2[i]
    
print(f'Scalar product = {scalar_prod:.1f}')