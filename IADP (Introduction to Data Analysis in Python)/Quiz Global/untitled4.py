def solve():
    print(df["Product line"].value_counts())

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()