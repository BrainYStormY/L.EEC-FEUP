def solve():
    totals_sums = df.groupby(["Product line", "City"])["Total"].sum()
    print(f"{totals_sums.idxmax()[1]}, {totals_sums.idxmax()[0]}, {totals_sums.max():.2f}")

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()