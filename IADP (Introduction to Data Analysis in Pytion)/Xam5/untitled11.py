def solve():
    print(df.loc[(df["price"] > 2000000) & (df["house_size"] <=1000)])

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()