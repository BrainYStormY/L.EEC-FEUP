def solve():
    print(df.loc[[1, 4, 6], "race":"salary"])

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()