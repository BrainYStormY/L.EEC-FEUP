#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Count the number of participants by class and gender.

def solve():
    print(df.groupby(["class", "sex"])["name"].count())

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()