def solve():
    status = df["status"].value_counts()
    status = status / df["status"].count() * 100
    status.index.name = None
    status.rename("status", inplace=True)
    print(status.round(1).sort_values(ascending=False))

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()