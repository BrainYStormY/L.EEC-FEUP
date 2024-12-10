def solve():
    df["status"] = df["status"].apply(hif_und)

def hif_und(name):
    return name.replace('-', '_')

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
print(hif_und('very-high'))
solve()
print(df.loc[:,'age':'status'].head(3))