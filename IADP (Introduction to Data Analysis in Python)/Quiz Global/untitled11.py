def solve():
    print(df.pivot_table(index="City", columns="Payment", values="Total", aggfunc="sum").round(2))

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()