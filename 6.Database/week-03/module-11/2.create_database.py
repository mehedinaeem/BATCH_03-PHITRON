# connection
import mysql.connector

mydbconnection=mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="naee2580"
)
print(mydbconnection)

db_name="python_test_db"
mycursor=mydbconnection.cursor()
sqlquery="CREATE DATABASE "+ db_name
mycursor.execute(sqlquery)