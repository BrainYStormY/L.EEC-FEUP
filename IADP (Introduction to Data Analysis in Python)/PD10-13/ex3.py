#Using the Pandas library and date/time functionality create a function 'solve(datestr, timezone)' to
#answer the following:
#Given a date string (YYYY-MM-DD HH:MM:SS) and a timezone, assume the date is in UTC and convert it to
#the given timezone. Return the new date.

def solve(datestr, timezone):
    dt = pd.to_datetime(datestr, format="%Y-%m-%d %H:%M:%S")
    dt = dt.tz_localize("UTC")
    dt = dt.tz_convert(timezone)
    return dt

#TEST
import pandas as pd
print(solve('2022-01-25 16:30:45', 'US/Pacific'))