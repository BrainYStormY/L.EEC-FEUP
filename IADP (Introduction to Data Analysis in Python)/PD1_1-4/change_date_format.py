#Given a date string in the following format "2022-03-20 18:45:23" and using
#the Python time library print the date in the following format "20/3/2022 18h 45min 23s".

import time

date = str(input("Date:"))

datetime = time.strptime(date, '%Y-%m-%d %H:%M:%S')

print(time.strftime('%d/%m/%Y %Hh %Mmin %Ss', datetime))