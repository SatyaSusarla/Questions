import pandas as pd
import numpy as mp
import matplotlib.pyplot as plt
from sklearn import linear_model

df = pd.read_csv("F:\Practice Questions\Questions\ML\data.csv")
x=df.area
z=df.bedroom
a=df.age
y=df.price
reg=linear_model.LinearRegression()
reg.fit(,)
print(reg.predict([[3000,3,40]]))
print(reg.coef_)
print(reg.intercept_)

