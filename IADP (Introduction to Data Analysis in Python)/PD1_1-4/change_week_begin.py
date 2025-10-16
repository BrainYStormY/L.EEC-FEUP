#Using the Python calendar library and given a weekday, integer (0-6), set
#that day as the first day of the week and confirm the change by printing
#the name of the default first day of the week.

import calendar

day = int(input("Day of the week (0-6):"))

calendar.setfirstweekday(day)
print(f'First day of the week: {calendar.day_name[calendar.firstweekday()]}')