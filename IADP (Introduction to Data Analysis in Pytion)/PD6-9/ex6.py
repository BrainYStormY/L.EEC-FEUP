#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Print a dataframe having for each 'city' the 'class' with the highest number of clients.

def solve():
    client_counts = df.groupby(["city", "class"]).size().reset_index(name="clients")
    client_counts["clients"] = client_counts["clients"].astype(float).round(1)
    print(client_counts.loc[client_counts.groupby("city")["clients"].idxmax()].set_index("city"))

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()