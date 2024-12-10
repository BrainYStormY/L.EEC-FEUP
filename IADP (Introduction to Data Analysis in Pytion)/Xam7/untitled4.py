def solve():
    total = len(df.loc[df["name"] == "Lewis Hamilton"])
    count = len(df.loc[(df["name"] == "Lewis Hamilton") & (df["status"] == "Finished")])
    res = count / total * 100
    print(f"{res:.1f}")

import pandas as pd
df = pd.read_csv('f1_1.csv',encoding='utf-8',parse_dates=['dob','date'])
solve()