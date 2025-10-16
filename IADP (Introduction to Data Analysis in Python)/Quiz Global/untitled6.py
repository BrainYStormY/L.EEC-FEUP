def solve():
    df.columns = df.columns.str.replace(' ', '_')

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()
print(df.loc[:,['Invoice_ID','Customer_type','Product_line','Unit_price','Tax_5%']].head(3))