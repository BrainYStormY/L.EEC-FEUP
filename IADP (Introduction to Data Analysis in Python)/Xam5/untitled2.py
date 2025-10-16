def solve():
    df.loc[2, ["status", "price"]] = ["sold", 60000]

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()
print(df.head(3))