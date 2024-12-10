def solve():
    df.sort_values("price", ascending=False, inplace=True)
    print(df.head(3))

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()