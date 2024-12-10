#Write a program that receives two lists of integers, A and B, and returns a list containing the elements in A that are not in B.

nA = int(input("Number of elements in first list = "))

A = list()

for i in range(0, nA, 1):
    aux = int(input("l1[" + str(i) + "]="))
    A.append(aux)
    
nB = int(input("Number of elements in second list = "))

B = list()

for i in range(0, nB, 1):
    aux = int(input("l2[" + str(i) + "]="))
    B.append(aux)
    
ret = list()

for val in A:
    if val in B:
        continue
    else:
        ret.append(val)
        
print(ret)