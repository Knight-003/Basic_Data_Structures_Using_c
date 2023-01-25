def main_menu():
    ch = 'y'
    while ch == 'y':
        print("****PERSIONAL INFORMATION SYSTEM OF STUDENTS****")
        print("1: To show databases")       
        print("2: To show tables present in the database")
        print("3: To display structure of the table")
        print("4: To add a record in the table")
        print("5: To update a record in the table")
        print("6: To delete a record from the table")
        print("7: To display all the records from the table")        
        print("8: To quit")
        choice = int(input("Enter your choice:\n"))
        if choice == 1:
            show_database()
        elif choice == 2:
            showtables()
        elif choice == 3:
            display_struc()
        elif choice == 4:
            add_rec()
        elif choice == 5:
            update_rec()
        elif choice == 6:
            delete_rec()
        elif choice == 7:
            fetch_data()
        elif choice == 8:
            print("Exiting")
            break
        else:
            print("Wrong input")


def show_database():
    import mysql.connector
    try:
        db = mysql.connector.connect(host="127.0.0.1",
                                     user="root", password="Nikhil@2002")
        cursor = db.cursor()
        cursor.execute("show databases")
        for x in cursor:
            print(x)
    except:
        print("Error in connection")

def showtables():
    import mysql.connector
    try:
        db = mysql.connector.connect(host="127.0.0.1",
                                     user="root", password="Nikhil@2002",
                                     database="students")
        cursor = db.cursor()
        cursor.execute("show tables")
        for x in cursor:
            print(x)
    except:
        print("Error in connection")


def display_struc():
    import mysql.connector
    try:
        db = mysql.connector.connect(host="127.0.0.1",
                                     user="root", password="Nikhil@2002",
                                     database="students")
        cursor = db.cursor()
        cursor.execute("desc student")
        for x in cursor:
            print(x)
    except:
        print("Error in connection")


def add_rec():
    import mysql.connector
    from mysql.connector.errors import Error
    try:
        db = mysql.connector.connect(host="127.0.0.1",
                                     user="root", password="Nikhil@2002",
                                     database="students")

        rno = int(input("Enter roll number:\n"))
        fn = input("Enter first name:\n")
        ln = input("Enter last name:\n")
        std = int(input("Enter standard:\n"))
        sec = input("Enter section:\n")
        fathername = input("Enter Father's name:\n")
        mothername = input("Enter mother's name:\n")
        contact = int(input("Enter contact number:\n"))
        aadhar = int(input("Enter aadhar number:\n"))
        qury = f'INSERT INTO student(roll,first_name,last_name,standered,section,father_name,mother_name,contact_no,adhar_id) VALUES ({rno},"{fn}","{ln}",{std},"{sec}","{fathername}","{mothername}",{contact},{aadhar})'
        
        print(qury)
        myc = db.cursor()

        myc.execute(qury)
        db.commit()

        print("Record added")
    except mysql.connector.Error as err:
        print("Something went wrong: {}".format(err))
        db.rollback()
        print("Error, Record not added")


def update_rec():
    import mysql.connector
    from mysql.connector.errors import Error
    try:
        db = mysql.connector.connect(host="127.0.0.1",
                                     user="root", password="Nikhil@2002",
                                     database="students")
        cursor = db.cursor()
        rno = int(input("Enter rollno:\n"))
        contact = int(input("Enter Contact number:\n"))
        sql_query = 'Update student set contact_no = ({}) where roll = ({})'.format(contact,rno)
        val = (contact, rno)
        cursor.execute(sql_query)
        print(cursor.rowcount, "record updated")
        db.commit()
    except mysql.connector.Error as err:
        print("Something went wrong: {}".format(err))
        db.rollback()
        print("Record not updated")


def delete_rec():
    import mysql.connector
    from mysql.connector.errors import Error
    try:
        db = mysql.connector.connect(host="127.0.0.1",
                                     user="root", password="Nikhil@2002",
                                     database="students")
        cursor = db.cursor()
        rno = int(input("Enter rollno:\n"))
        sql_query = 'delete from student where roll = ({})'.format(rno)
        cursor.execute(sql_query)
        print(cursor.rowcount, "record deleted")
        db.commit()
    except mysql.connector.Error as err:
        print("Something went wrong: {}".format(err))
        db.rollback()
        print("Record not deleted")


def fetch_data():
    import mysql.connector
    try:
        db = mysql.connector.connect(host="127.0.0.1",
                                     user="root", password="Nikhil@2002",
                                     database="students")
        cursor = db.cursor()
        cursor.execute("SELECT * FROM student")
        records = cursor.fetchall()
        for x in records:
            print(x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7])
    except:
        print("Error, unable to fetch data")


main_menu()













