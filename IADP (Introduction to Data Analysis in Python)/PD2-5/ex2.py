#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#How many people train less than 2 hours a week.

def solve():
    print(len(df.loc[df["hours"] < 2]))

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()