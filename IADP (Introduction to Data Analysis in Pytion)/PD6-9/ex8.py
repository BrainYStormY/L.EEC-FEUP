#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Compute the average age by class (round to two decimal places and name the column 'avg age')

def solve():
    print(df.groupby("class")["age"].mean().round(2).reset_index(name="avg age").set_index("class"))

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()