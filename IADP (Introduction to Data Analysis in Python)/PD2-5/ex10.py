#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#What is the average age of people who train more than 5 hours a week (rounded to two decimal places).

def solve():
    avg = df.loc[df["hours"] > 5]["age"].mean()
    print(f"{avg:.2f}")

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()