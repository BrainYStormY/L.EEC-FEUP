def solve():
    filtered = df.loc[((df["education"] > 15) & (df["salary"] < 35000)) | ((df["education"] < 5) & (df["salary"] > 100000))]
    print(filtered.loc[:, "education":"salary"])

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()