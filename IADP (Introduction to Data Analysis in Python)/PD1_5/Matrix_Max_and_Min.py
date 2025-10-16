#Given the name of a .csv file (delimiter ";") with a matrix, find the maximum and minimum
#of the matrix elements and the corresponding positions (row,colum), using NumPy library.

import numpy

filename = input("Filename:")

A = numpy.genfromtxt(filename, delimiter=";")

Max = [numpy.max(A)]
Min = [numpy.min(A)]

Ashape = A.shape
for row in range(Ashape[0]):
    for col in range(Ashape[1]):
        if A[row][col] == Max[0]:
            Max.append(row)
            Max.append(col)
        if A[row][col] == Min[0]:
            Min.append(row)
            Min.append(col)

print(f"Max: {Max[0]:.1f}, ({Max[1]},{Max[2]})")
print(f"Min: {Min[0]:.1f}, ({Min[1]},{Min[2]})")