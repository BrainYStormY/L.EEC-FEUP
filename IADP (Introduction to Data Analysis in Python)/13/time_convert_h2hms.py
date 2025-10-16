#Write a function that converts decimal hours to hours, minutes and seconds.
#The function should return a string as in the following example:
#24.5 -> "24 hours, 30 minutes, 0 seconds"

def dechours_to_hms(t):
    time = str()
    
    h = t // 1
    time = time + f'{h:.0f} hours, '
    t = t - h
    
    t = t * 60
    m = t // 1
    time = time + f'{m:.0f} minutes, '
    t = t - m
    
    t = t * 60
    s = round(t, 0)
    time = time + f'{s:.0f} seconds'
    t = t - s
    
    return time

#Test
print(dechours_to_hms(72.345))