#Given as input the following csv filename and the value of the column 'estado',
#write a program that prints the first 10 lines of the file with each line changed as follows:
#if 'estado' is equal to the input value a column 'sexo' should be added with the value 'M',
#if 'estado' ends with an 'o' or 'F' if 'estado' ends with an 'a', otherwise a blank column should be added.
#For example, if 'estado' input is 'Casado' the lines with 'Casado' will have a column added with 'M'
#and the lines with 'Casada' will have a column added with 'F', the other lines will have a blank column added.

filename = input("Filename:")

file = open(filename, "r")

estado = input("'estado' column value:")
pos_estado = -2 - len(estado)
estado = estado[:-1]

line = file.readline()
line = line[:-1]
print(f'{line};sexo')
for i in range(10):
    line = file.readline()
    line = line[:-1]
    if line[pos_estado:-2] == estado+"o":
        print(f'{line};M')
    else:
        if line[pos_estado:-2] == estado+"a":
            print(f'{line};F')
        else:
            print(f'{line};')

file.close()