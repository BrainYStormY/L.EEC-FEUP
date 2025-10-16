def solve():
    df.insert(7, "QxPrice", df["Unit price"] * df["Quantity"])

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()
print(df.loc[0:2,'Unit price':'Total'])