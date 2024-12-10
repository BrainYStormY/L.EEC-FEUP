#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#What percentage of female customers are on the list (rounded to two decimal places).

def solve():
    Fratio = len(df.loc[df["sex"] == "F"]) / len(df) * 100
    print(f"{Fratio:.2f}")

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()