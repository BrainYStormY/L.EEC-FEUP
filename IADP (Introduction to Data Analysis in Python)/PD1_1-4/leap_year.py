#Using the Python calendar library and given a year check if it is a leap year
#printing True (leap year) or False.

import calendar

year = int(input("Year:"))

print(calendar.isleap(year))