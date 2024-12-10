def solve():
    rank = df.groupby("name")["race"].count()
    rank = rank.sort_values(ascending=False)
    top5 = rank.head(5)
    res = top5.sort_index()
    res.index.name = None
    res.rename("name", inplace=True)
    print(res)

import pandas as pd
df = pd.read_csv('f1_1.csv',encoding='utf-8',parse_dates=['dob','date'])
solve()