#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Delete the rows with NaN values in any of the columns. Print the (number rows, number of cols) before and after.

def solve():
    print(df.shape)
    df.dropna(inplace=True)
    print(df.shape)

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1_nan.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()