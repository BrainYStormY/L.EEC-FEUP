#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Create a new column 'years' with the number of days between 'date' and 1/1/2022 divided by
#365 days and converted to an integer. Print the first three rows of the dataframe. 

def solve():
    df["years"] = pd.to_datetime("1/1/2022") - pd.to_datetime(df["date"], format="%d/%m/%Y")
    df["years"] = df["years"].dt.days/365
    df["years"] = df["years"].astype("int64")
    print(df.head(3))

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()