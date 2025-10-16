def solve():
    filtered = df.loc[df["name"] == "Lewis Hamilton"]
    print(filtered["points"].mean().round(1))

import pandas as pd
df = pd.read_csv('f1_1.csv',encoding='utf-8',parse_dates=['dob','date'])
solve()