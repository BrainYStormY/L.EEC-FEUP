#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#List of people under 150 cm or over 177 cm. View Name, Weight and Number of Children.

def solve():
    print(df.loc[(df["height"] < 150) | (df["height"] > 177), ["name", "weight", "children"]])

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()