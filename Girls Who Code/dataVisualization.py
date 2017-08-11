import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

data = pd.read_csv("academy_awards.csv", encoding = "ISO-8859-1")

for i in range(5,11):
    del data["Unnamed: " + str(i)]

print(data)

data.plot()

plt.show()

for i in year 
