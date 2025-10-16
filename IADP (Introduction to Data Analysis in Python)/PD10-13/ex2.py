#Given the dataframe df and using the Pandas library create a function 'solve(last_name)' to answer the following:
#Count and print the number of ocurrences of the last name (last_name).

def solve(last_name):
    count = df[df["name"].str.contains(last_name)]["name"].count()
    print(f"Number of ocurrences of {last_name}: {count}")

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve('Martins')