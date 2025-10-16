def solve():
    filtered = df.loc[df.groupby("state")["price"].idxmax(), ["state", "city", "price"]]
    filtered["price"] = filtered["price"].astype(float).round(1)
    print(filtered.set_index("state").rename(columns={"city":"City"}))

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()