#Calculate the mean of a list of numbers in a text file.

filename = input("Filename:")

file = open(filename, "r")

count = 0
mean = 0

while True:
    val = file.readline()
    if val == "":
        break
    
    mean += int(val)
    count += 1
    
file.close()
    
mean /= count
print(f'Mean = {mean:.2f}')