def solve():
    tab = df.pivot_table(index="status", columns="race", values="salary", aggfunc="mean").round(1).sort_index(ascending=True)
    print(tab.loc[["Married-civ-spouse", "Never-married"], ["White"]])

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()