def solve():
    total = df["Gender"].count()
    print(df["Gender"].value_counts()/total * 100)

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()