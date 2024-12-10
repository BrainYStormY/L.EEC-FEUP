def solve():
    global df
    df = df.loc[(df["sex"] != "Male") | (df["age"] < 45)]

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
print(df.shape)
solve()
print(df.shape)