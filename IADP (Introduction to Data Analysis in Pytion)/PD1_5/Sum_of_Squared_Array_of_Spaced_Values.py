#Given the initial, final, and the number of values (all floats) generate an array with
#n elements between initial and final values equally spaced, square the values and calculate
#the sum (rounded to two decimal places), using NumPy library.

import numpy

Init = int(input("Initial value:"))
Fin = int(input("Final value:"))
NVals = int(input("Number of values:"))

A = numpy.linspace(Init, Fin, NVals)
A = numpy.square(A)
Sum = numpy.sum(A)
print(f"Sum of the array: {Sum:.2f}")