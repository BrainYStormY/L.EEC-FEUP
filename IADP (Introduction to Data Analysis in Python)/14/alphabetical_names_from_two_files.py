#Consider two sequential access files, named Fiche1 and Fiche2,
#each containing a list of names (one per line) sorted in alphabetical order.
#Write a program that prints all the names in file Fiche1 and file Fiche2,
#sorted in alphabetical order, but without repetitions.
#(Note: you should not use arrays)

filename1 = input("Filename 1:")
filename2 = input("Filename 2:")

file1 = open(filename1, "r")
file2 = open(filename2, "r")

name1 = file1.readline()
name2 = file2.readline()
while (name1 != "") & (name2 != ""):
    if name1 == name2:
        if name1[-1] == "\n":
            name1 = name1[:-1]
        print(name1)
        name1 = file1.readline()
        name2 = file2.readline()
    else:
        if name1 < name2:
            if name1[-1] == "\n":
                name1 = name1[:-1]
            print(name1)
            name1 = file1.readline()
        else:
            if name2[-1] == "\n":
                name2 = name2[:-1]
            print(name2)
            name2 = file2.readline()
            
while name1 != "":
    if name1[-1] == "\n":
        name1 = name1[:-1]
    print(name1)
    name1 = file1.readline()
    
while name2 != "":
    if name2[-1] == "\n":
        name2 = name2[:-1]
    print(name2)
    name2 = file2.readline()
    
file1.close()
file2.close()