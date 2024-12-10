def solve():
    del df["bed"]
    del df["bath"]
    del df["acre_lot"]

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()
print(df.head(3))