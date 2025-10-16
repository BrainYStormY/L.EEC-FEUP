#Given a matrix calculate the transpose matrix using NumPy library.

import numpy

N = int(input("Number of rows ="))
M = int(input("Number of columns ="))

"""
matrx = list()
for i in range(N):
    row = list()
    for j in range(M):
        row.append(float(input(f"a[{i},{j}]=")))
    matrx.append(row)
A = numpy.array(matrx)
"""
#Replaced with
A = numpy.array(list(list(float(input(f"a[{i},{j}]=")) for j in range(M)) for i in range(N)))

A = numpy.transpose(A)
print("Matrix transpose:")
for row in A:
    print(row)