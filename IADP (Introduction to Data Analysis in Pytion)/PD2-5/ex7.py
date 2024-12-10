#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#What is the standard deviation of customer ages (rounded to two decimal places).

def solve():
    age_std = df["age"].std()
    print(f"{age_std:.2f}")

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()