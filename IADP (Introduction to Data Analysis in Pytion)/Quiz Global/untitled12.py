def solve():
    print(df.loc[df["Gender"] == "Female"]["Total"].mean().round(1))

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()