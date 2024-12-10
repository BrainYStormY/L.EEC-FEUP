def solve():
    df.loc[2, "Customer type"] = "Member"

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()
print(df.loc[:,'Invoice ID':'Gender'].head(3))