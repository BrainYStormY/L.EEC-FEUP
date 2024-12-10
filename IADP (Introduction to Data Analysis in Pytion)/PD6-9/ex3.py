#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Print the rank and city with the highest number of customers.

def solve():
    mode_rank = df["rank"].mode()[0]
    mode_city = df["city"].mode()[0]
    print(f"rank: {mode_rank} city: {mode_city}")

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()