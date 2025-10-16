def solve():
    filtered = df.loc[df["date"].dt.year == 2021]
    print(filtered.loc[filtered["dob"].idxmin()]["name"])

import pandas as pd
df = pd.read_csv('f1_1.csv',encoding='utf-8',parse_dates=['dob','date'])
solve()