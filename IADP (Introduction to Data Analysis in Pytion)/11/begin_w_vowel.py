#Given a sentence determine the number of words beginning with a vowel.

sentence = str(input())

vowels = ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U')
count = 0
whites = [0]

for i in range(0, len(sentence), 1):
    if sentence[i] == " ":
        whites.append(i + 1)

for i in whites:
    if sentence[i] in vowels:
        count += 1
        
print(f'The number of words starting with a vowel: {count}')