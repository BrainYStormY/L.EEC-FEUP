def solve():
    res = df["status"].value_counts()
    res.index.name = None
    res.rename("status", inplace=True)
    print(res)

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()