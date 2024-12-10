#Given as input the following csv filename and the id of a person write a program to
#print the line of the file corresponding to that person.

filename = input("Filename:")

file = open(filename, "r")

name_id = input("Name id:")

line = file.readline()
while line != "":
    line = file.readline()
    
    line_id = line[:7]
    if line_id == name_id:
        line = line[:-1]
        print (line)
        break
    
file.close()