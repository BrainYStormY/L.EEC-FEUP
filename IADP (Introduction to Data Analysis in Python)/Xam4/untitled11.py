def solve():
    df["age"] = pd.cut(df.age, bins=[0, 20, 40, 60, 80, 100], labels=["very_young", "young", "middle_age", "old", "very_old"], right=False)
    res = df["age"].value_counts().sort_index(ascending=True)
    res.index.name = None
    res.rename("age", inplace=True)
    print(res)

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()