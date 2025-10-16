#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Compute the number of customers by rank classification.

def solve():
    ranked = df.groupby("rank")["rank"].count().sort_values(ascending=False)
    ranked.index.name = None
    print(ranked)

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()