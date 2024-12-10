def solve():
    ages = df.loc[df["salary"] >= 150000]["age"]
    print(pd.Series({"min": round(ages.min(), 1), "max": round(ages.max(), 1), "median": round(ages.median(), 1)}, name="age"))

import numpy as np
import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()