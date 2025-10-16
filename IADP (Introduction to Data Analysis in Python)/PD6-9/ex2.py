#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Group by 'class' and print the minimum, maximum and mean of the age.

def solve():
    print(df.groupby("class").agg(min=("age", "min"), max=("age", "max"), mean=("age", "mean")).round(2))

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()