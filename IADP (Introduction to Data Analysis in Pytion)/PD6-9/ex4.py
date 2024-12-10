#Given the dataframe df and using the Pandas library create a function 'solve(df, filename)' that
#should return a new dataframe created by appending to df the dataframe stored in the file 'filename'.
#The dataframe in the file has a structure identical to df and should be read with an instruction similar
#to the one used in the test case to read df.

def solve(df, filename):
    new_df = pd.read_csv(filename, sep = ";", index_col = 'id', parse_dates = ['date'])
    return pd.concat([df, new_df])

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
filename = 'gym_rows_q1.csv'
df = solve(df, filename)
print(df.shape)
print(df.tail(3))