#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Calculate and print the mean of the 'age' and fill the NaN values with zero and calculate and
#print the mean again. (rounded to two decimal places)

def solve():
    mean = df["age"].mean().round(2)
    print(mean)
    df.fillna(0, inplace=True)
    mean = df["age"].mean().round(2)
    print(mean)

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1_nan.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()