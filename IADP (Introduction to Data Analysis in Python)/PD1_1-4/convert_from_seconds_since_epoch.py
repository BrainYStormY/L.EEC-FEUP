#Using the Python time library convert a given floating number of seconds since
#the epoch to a string.

import time

secs = float(input("Number of seconds:"))

secstime = time.gmtime(secs)

print(time.asctime(secstime))