import mysql.connector

my_first_database=mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="naee2580"
)
print(my_first_database)


# its only for connection