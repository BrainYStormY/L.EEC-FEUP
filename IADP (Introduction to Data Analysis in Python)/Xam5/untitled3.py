def solve():
    total = len(df["house_size"])
    count = len(df.loc[df["house_size"] > 2000])
    res = count / total * 100
    print(f"{res:.1f}")

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()