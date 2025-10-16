def solve():
    print(df.pivot_table(index="status", columns="sex", values="age", aggfunc="mean").round(1))

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()