def solve():
    global df
    df = df[df['City'] != 'Yangon']

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()
print(df.loc[:,'Invoice ID':'Product line'].head(3))