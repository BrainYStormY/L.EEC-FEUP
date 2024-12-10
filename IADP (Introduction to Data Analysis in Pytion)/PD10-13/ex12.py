#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Print a numpy array with the number of rows that have no NaN values and the number of rows that have at
#least one NaN value.

def solve():
    rows_wo_nan = df.dropna().shape[0]
    rows_w_nan = df.shape[0] - rows_wo_nan
    print([rows_wo_nan, rows_w_nan])

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1_nan.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()