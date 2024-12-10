def solve():
    del df["code"]
    del df["fastest_lap_speed"]
    del df["race"]

import pandas as pd
df = pd.read_csv('f1_1.csv',encoding='utf-8',parse_dates=['dob','date'])
solve()
print(df.head(3))