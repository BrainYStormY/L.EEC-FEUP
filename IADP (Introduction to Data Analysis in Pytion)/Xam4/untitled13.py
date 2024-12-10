def solve():
    meanAges = df.groupby(["status", "race"])["age"].mean().reset_index()
    maxAge = meanAges.loc[meanAges["age"].idxmax()]
    Mstat = maxAge["status"]
    Mrace = maxAge["race"]
    Mage = maxAge["age"]
    print(f"{Mstat}, {Mrace}, {Mage:.1f}")

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()