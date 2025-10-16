#Write a program that asks for a full name input, and prints the abbreviations of the first and all middle names, except the last name.
#Assume that all names are in Portuguese. The prepositions "da", "das", "de", "do", "dos" should not be printed.

fullname = str(input())

lastname = str()

for i in range(-1, -(len(fullname) + 1), -1):
    if fullname[i] == " ":
        break

lastname = fullname[i + 1:]
        
ret = str()

for char in fullname[:i]:
    char_str = str()
    char_str += char
    
    if char_str.isupper():
        ret += char_str + ". "

ret += lastname

print(ret)