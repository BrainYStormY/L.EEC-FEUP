#Calculate the scalar product of two vectors using NumPy library.

import numpy

N = int(input("Number of elements:"))

A = numpy.array(list(float(input(f"a[{n}]:"))for n in range(N)))
B = numpy.array(list(float(input(f"b[{n}]:"))for n in range(N)))

print(f"Scalar product = {numpy.dot(A, B):.1f}")