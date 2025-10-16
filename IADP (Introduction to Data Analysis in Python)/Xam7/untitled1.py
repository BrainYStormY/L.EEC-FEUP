def solve():
    df.loc[2, ["status", "points"]] = ["Engine", 0]

import pandas as pd
df = pd.read_csv('f1_1.csv',encoding='utf-8',parse_dates=['dob','date'])
solve()
print(df.loc[:,'name':'status'].head(3))