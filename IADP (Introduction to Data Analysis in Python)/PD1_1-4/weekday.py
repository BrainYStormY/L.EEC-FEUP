#Using the Python calendar library and given a year, a month and a day print 
#the weekday name of the corresponding date.

import calendar

year = int(input("Year:"))
month = int(input("Month:"))
day = int(input("Day:"))

weekday = calendar.weekday(year, month, day)

print(calendar.day_name[weekday])