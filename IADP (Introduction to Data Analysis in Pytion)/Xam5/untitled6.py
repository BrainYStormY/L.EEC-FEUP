def solve():
    df.insert(2, "price_euros", round(df["price"] * 0.95, 1))

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()
print(df.head(3))