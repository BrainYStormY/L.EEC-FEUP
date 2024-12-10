#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Print the first 3 rows from df.

def solve():
    print(df.head(3))

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()