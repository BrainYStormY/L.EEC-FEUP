#Write a function that receives a string with the first and last name
#and returns last and first name.

def swap(fullname):
    swapped = str()
    
    whitespace = fullname.find(" ")
    swapped = fullname[whitespace + 1:] + " " + fullname[:whitespace]
    
    return swapped

#Test
print(swap("Cristiano Ronaldo"))