#Given the dataframe df and using the Pandas library create a function 'solve(old_cat, new_cat)' to
#answer the following:
#Change the 'rank' name from old_cat to new_cat and convert the column 'rank' to category dtype.

def solve(old_cat, new_cat):
    df["rank"] = df["rank"].replace(old_cat, new_cat)
    df["rank"] = df["rank"].astype("category")

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve('fair', 'poor')
print(pd.unique(df['rank']))