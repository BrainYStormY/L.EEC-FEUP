def solve():
    print(df.loc[2:5, ["price", "city", "house_size"]])

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()