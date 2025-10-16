#Given a matrix calculate the determinant and the matrix inverse using NumPy library.

import numpy

N = int(input("Number of rows ="))
M = int(input("Number of columns ="))

A = numpy.array(list(list(float(input(f"a[{i},{j}]=")) for j in range(M)) for i in range(N)))

print(f"Determinant = {numpy.linalg.det(A):.1f}\nMatrix inverse:")
for row in numpy.linalg.inv(A):
    print(row)