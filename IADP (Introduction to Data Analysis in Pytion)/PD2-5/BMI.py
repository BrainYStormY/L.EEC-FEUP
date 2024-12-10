#Given the dataframe df and using the Pandas library create a function 'solve()' to answer the following:
#The Body Mass Index (BMI) is obtained by the formula:
#BMI = Weight /(Height)^2 (Height must be expressed in meters).
#Create a new column 'bmi' (rounded to two decimal places) with the corresponding
#value and print the id, name, weight, height and bmi of the first three rows of the dataframe.

import numpy

def solve():
    df["bmi"] = df["weight"] / ((df["height"] * 0.01) ** 2)
    df["bmi"] = numpy.round(df["bmi"], 2)
    print(df.loc[:2, ["id", "name", "weight", "height", "bmi"]])

#TEST
import pandas as pd
df = pd.read_csv('gym_q1.csv',sep=';', parse_dates=['date'])
solve()