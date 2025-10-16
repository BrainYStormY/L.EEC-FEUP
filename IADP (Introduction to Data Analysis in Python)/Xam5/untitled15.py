def solve():
    df["days"] = ndias(df["sold_date"]).round(1)

def ndias(date):
    delta = pd.to_datetime("2022-06-27", format="%Y-%m-%d") - date
    return delta.dt.days

import pandas as pd
df = pd.read_csv('usa_real_estate1.csv', sep=';',parse_dates=['sold_date'])
solve()
print(df[~df['sold_date'].isna()].head(3))




