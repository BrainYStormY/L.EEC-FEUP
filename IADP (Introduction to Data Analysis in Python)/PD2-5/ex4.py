#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#What is the total number of children of customers over 55 years of age.

def solve():
    print(sum(df.loc[df["age"] > 55]["children"]))

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()