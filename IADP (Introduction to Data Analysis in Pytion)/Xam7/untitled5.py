def solve():
    global df
    df = df.loc[df["name"] != "Lewis Hamilton"]

import pandas as pd
df = pd.read_csv('f1_1.csv',encoding='utf-8',parse_dates=['dob','date'])
print(df.shape)
solve()
print(df.shape)