def solve():
    filtered = df.loc[df["salary"] >= 150000]
    total = filtered["status"].count()
    married = filtered.loc[filtered["status"].str.contains("Married")]["status"].count()
    ratio = married / total * 100
    print(f"{ratio:.1f}%")

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()