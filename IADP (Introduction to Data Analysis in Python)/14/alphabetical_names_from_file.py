#Create program that reads a list of names in a given text file.
#After reading the file, the program should print all names
#sorted alphabetically, and the total number of names in that file.

filename = input("Filename:")

namesfile = open(filename, "r")

names = list()

for name in namesfile:
    names.append(name)
    
namesfile.close()
    
names.sort()
for name in names:
    print(name)
    
print(f'Count of names: {len(names)}')