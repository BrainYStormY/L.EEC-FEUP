def solve():
    print(df['Total'].describe().round(2))

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()