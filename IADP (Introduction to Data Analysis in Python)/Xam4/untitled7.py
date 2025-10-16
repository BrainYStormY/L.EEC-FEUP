def solve():
    df["birthday"] = pd.to_datetime(df["birthday"], format="%Y-%m-%d")
    df["birthday"] = df["birthday"].dt.year
    bd_yrs = df["birthday"].value_counts().sort_values(ascending=False)
    bd_yrs.index.name = None
    print(bd_yrs.tail(3))

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()