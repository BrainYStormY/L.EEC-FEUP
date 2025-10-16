#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#How many single men go to the gym.

def solve():
    print(len(df.loc[(df["status"] == "single") & (df["sex"] == "M")]))

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()