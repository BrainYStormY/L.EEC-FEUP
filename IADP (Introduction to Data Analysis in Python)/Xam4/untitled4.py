def solve():
    min_age = df["age"].min()
    res = df.loc[df["age"] == min_age]["salary"].mean().round(1)
    print(f"Minimum age: {min_age}\nAverage salary for people with that age: {res}")

import pandas as pd
df = pd.read_csv('adult1.csv', sep=';',parse_dates=['birthday'])
solve()