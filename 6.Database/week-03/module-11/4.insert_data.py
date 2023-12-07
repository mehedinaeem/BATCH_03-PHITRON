# connection
import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="naee2580",
    database=db_name
)

mycursor = mydbconnection.cursor()

sqlquery = """
    INSERT INTO STUDENT (ROLL, NAME)
        VALUES ('S001', 'Naeem'),
            ('S002', 'Mehedi Hasan'),
            ('S003', 'Umma Lutfia')
"""

mycursor.execute(sqlquery)

# Commit the changes after executing the insert query
mydbconnection.commit()

print("Inserted data into the table successfully")
