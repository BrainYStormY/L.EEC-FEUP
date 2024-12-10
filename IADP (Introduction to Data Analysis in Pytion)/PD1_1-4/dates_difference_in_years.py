#Given two integers representing the number of seconds since the epoch calculate
#the difference in full years of the two corresponding dates.
#(using the Python datetime library)
#(note: you should take into account the day and month of the two dates).

import datetime

date1secs = int(input("Number of seconds since the epoch of the first date:"))
date2secs = int(input("Number of seconds since the epoch of the second date:"))

datetime1 = datetime.datetime.fromtimestamp(date1secs)
datetime2 = datetime.datetime.fromtimestamp(date2secs)

yearsdiff = datetime2.year - datetime1.year

if (datetime2.month < datetime1.month) or ((datetime2.month == datetime1.month) and datetime2.day < datetime1.day) :
    yearsdiff -= 1
    
print(f'Number of years between {datetime1.strftime('%Y-%m-%d')} and {datetime2.strftime('%Y-%m-%d')} = {yearsdiff}')