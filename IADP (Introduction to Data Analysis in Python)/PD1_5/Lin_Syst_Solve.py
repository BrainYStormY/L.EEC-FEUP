#Given a matrix a (NxN) and a vector b (N) solve the linear system ax = b using NumPy library.

import numpy

row1 = list(map(float, input().split(",")))
N = len(row1)
matrx = list()
matrx.append(row1)
for _ in range(N - 1):
    matrx.append(list(map(float, input().split(","))))
A = numpy.array(matrx)

B = numpy.array(list(map(float, input().split(","))))

print(f"solution:\n{numpy.linalg.solve(A, B)}")