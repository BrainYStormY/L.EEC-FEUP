#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Convert the city name to uppercase. Print the dataframe first three rows.

def solve():
    df["city"] = df["city"].str.upper()
    print(df.head(3))

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()