def solve():
    idx = df["fastest_lap_speed"].idxmax()
    df.loc[idx, "fastest_lap_speed"] = round(df.loc[idx, "fastest_lap_speed"], 1)
    print(df.loc[[idx], ["name", "race", "fastest_lap_speed"]])

import pandas as pd
df = pd.read_csv('f1_1.csv',encoding='utf-8',parse_dates=['dob','date'])
solve()