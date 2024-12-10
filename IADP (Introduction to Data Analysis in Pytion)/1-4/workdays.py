#Given the day of the week (1 - Mon; 2 - Tuesday, ..., 5 - Friday) and a 
# waiting period in working days, compute after how many weeks (7 days) and in 
# which working day of the week ends the respective period

day = int(input("day of the week:"))
wait = int(input("waiting period:"))

weeks = int(wait / 5)

workday = wait % 5
workday += day
if workday > 5:
    workday %= 5

print ("weeks: " + str(weeks) + ", workday: " + str(workday))