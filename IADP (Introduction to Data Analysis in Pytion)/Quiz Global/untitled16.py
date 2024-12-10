def solve():
    print(df.pivot_table(index="City", columns="Customer type", values="Invoice ID", aggfunc="count", margins=True, margins_name="All"))

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()