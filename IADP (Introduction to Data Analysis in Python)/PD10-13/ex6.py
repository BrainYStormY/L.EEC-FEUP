#Given the dataframe df and using the Pandas library create a function 'solve(col_name, col_dtype)' to
#answer the following:
#Convert the given column (col_name) to dtype (col_dtype) data type. Print the dataframe dtypes.

def solve(col_name, col_dtype):
    df[col_name] = df[col_name].astype(col_dtype)
    print(df.dtypes)

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve('height', float)