def solve():
    filtered = df[(((df["Customer type"] == "Member") & (df["Gender"] == "Male")) | ((df["Customer type"] == "Normal") & (df["Gender"] == "Female"))) & (df["Unit price"] > 99)]
    print(filtered.loc[:, ["Customer type", "Gender", "Product line", "Unit price"]])

import pandas as pd
df = pd.read_csv('supermarket1.csv', sep=';')
solve()