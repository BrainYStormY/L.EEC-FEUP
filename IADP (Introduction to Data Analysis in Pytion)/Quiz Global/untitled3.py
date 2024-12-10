def solve():
    del df["Customer type"]

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()
print(df.loc[:,'Invoice ID':'Gender'].head(3))