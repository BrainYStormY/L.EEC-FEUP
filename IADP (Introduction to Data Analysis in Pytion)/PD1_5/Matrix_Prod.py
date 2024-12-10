#Compute the product of two matrices A (NxM) and B (MxP) using NumPy library.
#Input order (one per line): N, M, P, A[0][...], A[1][...], ..., B[0][...],B[1][...]

import numpy

N = int(input())
M = int(input())
P = int(input())

matrx = list()
for _ in range(N):
    matrx.append(list(float(input()) for _ in range(M)))
A = numpy.array(matrx)
matrx.clear()
for _ in range(M):
    matrx.append(list(float(input()) for _ in range(P)))
B = numpy.array(matrx)

Prod = numpy.dot(A, B)
for row in Prod:
    print(row)