import pymysql

class MySQL:
    def __init__(self):
        self.ConnectDB()
        self.CreateDB()
        self.CreateTBT()
        self.CreateTBS()

    def ConnectDB(self):
        self.db = pymysql.connect(
            user = "root",
            password = "2002",
            host = "localhost"
        )
        self.cursor = self.db.cursor()

    def CreateDB(self):
        self.cursor.execute("CREATE DATABASE IF NOT EXISTS School")
        self.cursor.execute("USE School")
    
    def CreateTBT(self):
        self.cursor.execute("""CREATE TABLE IF NOT EXISTS teachers(
                            ism VARCHAR(50) DEFAULT 'Ali',
                            familiya varchar(50), 
                            experience INT,
                            salary REAL,
                            branch varchar(50)
                            )""")
    def CreateTBS(self):
        self.cursor.execute("""CREATE TABLE IF NOT EXISTS students(
                            ism VARCHAR(50) DEFAULT 'Ali',
                            familiya varchar(50), 
                            monthly_payment INT,
                            course_duration REAL,
                            branch varchar(50)
                            )""")
    
    
    # def InsertTB(self):
    #     self.cursor.execute('''INSERT INTO teachers(ism, age, salary) VALUES("Aziz", 23, 45.6320)''')
    #     self.db.commit()

    def InsertTBT(self, ism,familiya,experience,salary,branch):
        self.cursor.execute(f'''INSERT INTO teachers(ism, familiya ,experience, salary,branch) VALUES("{ism}","{familiya}",{experience},{salary},"{branch}")''')
        self.db.commit()
    
    def InsertTBS(self, ism,familiya,monthly_payment,course_duration,branch):
        self.cursor.execute(f'''INSERT INTO students(ism, familiya ,monthly_payment,course_duration,branch) VALUES("{ism}","{familiya}",{monthly_payment},{course_duration},"{branch}")''')
        self.db.commit()

    def savol1(self):
        self.cursor.execute("select * from teachers  order by salary  ")
        natija=self.cursor.fetchall()
        print(natija)

    def savol2(self):
        self.cursor.execute("select * from teachers  order by salary,experience desc")
        natija=self.cursor.fetchall()
        print(natija)
    
    def savol3(self):
        self.cursor.execute("update teachers set branch='chilonzor' order by experience desc limit 1")
        self.db.commit()
        natija=self.cursor.fetchall()
        print(natija)
    
    

    # def FirstQuery(self):
    #     self.cursor.execute("UPDATE user SET salary=salary*2 WHERE ism LIKE 'a%'")
    #     self.db.commit()

    # def SecondQuery(self):
    #     self.cursor.execute("SELECT id, ism FROM user WHERE salary > 20")
    #     natija = self.cursor.fetchall() # [(),(),(),()]
        # natija = self.cursor.fetchmany(2)
        # natija = self.cursor.fetchone()
        # print(natija)

        # for i in natija:
        #     print(i)

sql = MySQL()
# sql.InsertTB()
# sql.InsertTB2("Akmal", 13, 1000)
# for i in range(7):
# #     sql.InsertTBT(input("Ism: "), input("Familiya: "), float(input("Tajriba: ")),int(input("Oylik: ")),input("Branh: "))
# for i in range(7):
#     sql.InsertTBT(input("Ism: "), input("Familiya: "), float(input("monthly_payment: ")),int(input("course_duration: ")),input("Branh: "))
# sql.FirstQuery()
# sql.SecondQuery()
sql.savol3()
sql.savol1()