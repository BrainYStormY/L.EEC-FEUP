#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Create a table with the number of customers by city and sex and by rank classification

def solve():
    print(pd.pivot_table(df, values="name", index=["city", "sex"], columns="rank", aggfunc="size"))

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()