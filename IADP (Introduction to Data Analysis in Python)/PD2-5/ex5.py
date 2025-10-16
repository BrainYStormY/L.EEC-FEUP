#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#List of people who are over 175 cm tall and have children. View name, height and children.

def solve():
    print(df.loc[(df["height"] > 175) & (df["children"] != 0), ["name", "height", "children"]])

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()