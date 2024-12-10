def solve():
    print(df.pivot_table(index="Product line", values="Quantity", aggfunc="sum", margins=True, margins_name="All"))

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()