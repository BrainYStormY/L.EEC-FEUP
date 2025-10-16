def solve():
    df["birthday"] = pd.to_datetime(df["birthday"], format="%Y-%m-%d")
    df.insert(11, "retirementdate", df["birthday"] + pd.DateOffset(years=66))

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()
print(df.loc[:,'salary':'birthday'].head(3))