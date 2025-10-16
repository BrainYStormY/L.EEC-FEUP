def solve():
    df["house_class"] = pd.cut(df.house_size, bins=[0, 1000, 2000, 3000, 5000, 10000], right=False, labels=["very_small", "small", "medium", "large", "very_large"])
    counts = df["house_class"].value_counts()
    counts.index.name = None
    counts.rename("house_size", inplace=True)
    print(counts)

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()