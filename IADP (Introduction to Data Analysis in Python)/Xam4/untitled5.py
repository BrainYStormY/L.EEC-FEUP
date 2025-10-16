def solve():
    rich = df.loc[df["salary"] > 150000]
    print(rich["salary"].count())
    print(rich.loc[rich["education"] >= 13]["education"].count())

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()