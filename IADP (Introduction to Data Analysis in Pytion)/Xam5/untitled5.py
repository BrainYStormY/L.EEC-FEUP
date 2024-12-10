def solve():
    global df
    df = df.loc[df["price"] <= 800000]

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
print(df.shape)
solve()
print(df.shape)