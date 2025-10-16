def solve():
    df.insert(2, "surname", df["name"].str.split().str[-1])

import pandas as pd
df = pd.read_csv('f1_1.csv',encoding='utf-8',parse_dates=['dob','date'])
solve()
print(df.head(3))