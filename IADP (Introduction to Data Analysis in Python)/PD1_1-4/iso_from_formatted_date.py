#Given a date string in the following format ("17/02/2022") print the corresponding
#iso weekday (1 is Monday) and week (the first week of the year is the first week
#containing a Thursday).
#(using the Python datetime library)

import datetime

datestr = input("Date:")

fmt = "%d/%m/%Y"
date = datetime.datetime.strptime(datestr, fmt)

isodate = date.isocalendar()
weekday = isodate[2]
week = isodate[1]

print(f'weekday = {weekday}, week = {week}')