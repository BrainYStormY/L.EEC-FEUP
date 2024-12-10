#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Create a table with the number of customers by status and sex registered after 2014.

def solve():
    df["date"] = pd.to_datetime(df["date"], format="%d/%m/%Y")
    filtered_df = df.loc[df["date"] >= "01/01/2015"]
    print(pd.pivot_table(filtered_df, index="status", columns="sex", values="name", aggfunc="size").round(1))

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()