#Compute the sum of two NxM matrices using NumPy library.

import numpy

N = int(input())
M = int(input())

matrx = list()
for _ in range(N):
    matrx.append(list(map(int,input().split(","))))
A = numpy.array(matrx)
matrx.clear()
for _ in range(N):
    matrx.append(list(map(float,input().split(","))))
B = numpy.array(matrx)

Sum = A + B
for row in Sum:
    print(row)