#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Name of the customer that has more hours in the class 'pilates'.

def solve():
    pilates = df.loc[df["class"] == "pilates"]
    print(pilates.loc[pilates["hours"].idxmax()]["name"])

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()