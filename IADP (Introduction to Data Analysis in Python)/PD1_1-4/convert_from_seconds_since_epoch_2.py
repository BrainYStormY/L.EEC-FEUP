#Given two date strings (date1, date2, date2 > date1) in the following format "2022-02-16"
#and using the Python time library calculate the number of days between the two dates.

import datetime

date1 = str(input("Date1:"))
date2 = str(input("Date2:"))

datetime1 = datetime.datetime.strptime(date1, '%Y-%m-%d')
datetime2 = datetime.datetime.strptime(date2, '%Y-%m-%d')

dif = datetime2 - datetime1
dif = str(dif)
difdays = str()
for digit in dif:
    if digit == ' ':
        break
    else:
        difdays += digit

print(f"Number of days between dates={int(difdays):.1f}")