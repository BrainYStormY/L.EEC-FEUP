#Given the seed for the random number generator and the number of rows and columns,
#generate a matrix drawing samples from a normal distribution with mean 0 and standard
#deviation 1 and calculate the mean and the standard deviation (rounded to two decimal places)
#of the matrix elements, using NumPy library.

import numpy

Seed = int(input("Seed:"))
Rows = int(input("Rows:"))
Columns = int(input("Columns:"))

numpy.random.seed(Seed)
A = numpy.random.normal(0, 1, (Rows, Columns))
print(f"Mean: {numpy.mean(A):.2f}, Std: {numpy.std(A):.2f}")