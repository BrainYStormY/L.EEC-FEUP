#Consider two sequential access files each having a list of values ​​stored.
#Write a program that prints the average of the pair of values in the same line ​​of the two files.
#If the two files do not have the same number of lines the missing values should be considered zero.
#(Note: you should not use arrays)

filename1 = input("Filename 1:")
filename2 = input("Filename 2:")

file1 = open(filename1, "r")
file2 = open(filename2, "r")

val1 = file1.readline()
val2 = file2.readline()
while (val1 != "") & (val2 != ""):
    med = (int(val1) + int(val2)) / 2
    print(f'{med:.1f}')
    
    val1 = file1.readline()
    val2 = file2.readline()
            
while val1 != "":
    med = (int(val1) + 0) / 2
    print(f'{med:.1f}')
    
    val1 = file1.readline()
    
while val2 != "":
    med = (0 + int(val2)) / 2
    print(f'{med:.1f}')
    
    val2 = file2.readline()
    
file1.close()
file2.close()