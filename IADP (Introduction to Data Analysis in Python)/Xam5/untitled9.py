def solve():
    print(df.loc[df["house_size"] > 40000, "city":"house_size"])

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()