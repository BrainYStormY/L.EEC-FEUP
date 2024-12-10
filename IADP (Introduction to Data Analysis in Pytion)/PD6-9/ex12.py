#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Print a dataframe with the number of registered clients by month.

def solve():
    df["date"] = pd.to_datetime(df["date"], format="%d/%m/%Y")
    cols = df.columns.tolist()
    cols[cols.index('date')] = 'month'
    df.columns = cols
    print(df.groupby(df["month"].dt.month)["name"].count().reset_index(name="clients").set_index("month"))

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()