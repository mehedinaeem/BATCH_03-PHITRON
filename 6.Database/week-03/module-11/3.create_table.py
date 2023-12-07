# connection
import mysql.connector

db_name="python_test_db"

mydbconnection=mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="naee2580",
    database=db_name
)




mycursor=mydbconnection.cursor()

sqlquery= """
    CREATE TABLE STUDENT(
        ROLL VARCHAR(4),
        NAME VARCHAR(50)
    )
    """

mycursor.execute(sqlquery)
print("create table succesfully")