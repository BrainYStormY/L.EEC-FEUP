def solve():
    print(df.loc[[0, 2], ["Invoice ID", "Total"]])

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()