#Given the dataframe df and using the Pandas library create a function 'solve(df, filename)' that
#should return a new dataframe created by joining to df the columns from the dataframe stored in
#the file 'filename'.
#The dataframe in the file has ";" as delimiter and the column "id" should be defined as
#the index of the dataframe.
#Only the rows with common "id" in both dataframes shoud be considered.

def solve(df, filename):
    new_df = pd.read_csv(filename, sep = ";", index_col = 'id')
    return df.join(new_df, how="inner")

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
filename = 'gym_cols_q1.csv'
df = solve(df, filename)
print(df.shape)
print(df.head(3))