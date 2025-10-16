def solve():
    filtered = df.loc[(df["salary"] > 240000) & (df["race"] == "Black")]
    print(filtered.loc[:, "race":"salary"])

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()