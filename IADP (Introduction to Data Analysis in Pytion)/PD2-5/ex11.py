#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#List of men measuring up to 156 cm. View Name, Age, Height and Status.

def solve():
    print(df.loc[(df["sex"] == "M") & (df["height"] <= 156), ["name", "age", "height", "status"]])

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()