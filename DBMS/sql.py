import mysql.connector
import randome as rndm
import demo as dm
mydb = mysql.connector.connect(
  host="localhost",
  user="fuad7161",
  password="Fuadul11235813",
  database = 'fuad'
)
mycursor = mydb.cursor()
sql = 'INSERT INTO Customers (CustomerName,City,PostalCode,Country,Age,Gender) values (%s,%s,%s,%s,%s,%s)'
for i in range(0,100):
    values = dm.genlinst()
    mycursor.execute(sql , values)
mydb.commit()