#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#How many people have 0, 1, 2, ... children.

def solve():
    print(df["children"].value_counts().sort_index())

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()