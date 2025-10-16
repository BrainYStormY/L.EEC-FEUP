def solve():
    print(df.loc[df["Total"] > 1030][["Product line", "Unit price", "Quantity", "Tax 5%", "Total"]])

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()