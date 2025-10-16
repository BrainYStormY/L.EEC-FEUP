#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#Group by class and gender with three columns:
#max_age    min_weight    mean_height
#with the maximum age, the minimum weight and the mean of the height

def solve():
    print(df.groupby(["class", "sex"]).agg(max_age=("age", "max"), min_weight=("weight", "min"), mean_height=("height", "mean")).round(2))

#TEST
import pandas as pd
df = pd.read_csv('gym2_q1.csv', sep = ";", index_col = 'id', parse_dates = ['date'])
solve()