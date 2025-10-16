def solve():
    print(df.loc[0:2, "Total":"Payment"])

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()