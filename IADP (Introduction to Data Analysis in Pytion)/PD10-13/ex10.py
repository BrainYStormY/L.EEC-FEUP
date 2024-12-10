#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Create a new column 'rank' with the following customer classification.
#Number of years at the gym between:
#[0, 5[ - fair
#[5, 10[ - good
#[10, 15[ - very_good
#[15, [ - excellent
#Print the first 5 rows from df.

def solve():
    ranks = ["fair", "good", "very_good", "excellent"]
    gaps = [0, 5, 10, 15, float("inf")]
    df["rank"] = pd.cut(df.years, bins=gaps, labels=ranks, right=False)
    print(df.head(5))

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1a.csv',sep=';', parse_dates=['date'])
solve()