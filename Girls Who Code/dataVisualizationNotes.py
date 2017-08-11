import pandas


data = pandas.read_csv("weather_year.csv")

print(data)

print (len(data))

print (data.columns)

print(data["EDT"])

print(data[["EDT", "Mean TemperatureF"]])

print (data.EDT)

print (data.EDT.head())

print(data.EDT.head(10))

print(data ["Mean TemperatureF"].head())

print(data)

print(data.mean_temp.std())

print(data.mean_temp.hist())

#print(data.std())

print(data.date.head())
