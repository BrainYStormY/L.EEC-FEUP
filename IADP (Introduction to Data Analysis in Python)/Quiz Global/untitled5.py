def solve():
    df["rank"] = pd.cut(df.Total, bins=[0, 220, 440, 660, 880, 1100], labels=["low", "fair", "good", "very_good", "excellent"], right=False)
    ranked = df.groupby("rank")["Total"].count()
    ranked.index.name = None
    print(ranked)

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()