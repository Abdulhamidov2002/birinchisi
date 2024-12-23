import pymysql

class MySQL:
    def __init__(self):
        self.connectDB()
        self.CreateDB()
        self.CreateTB()

    def connectDB(self):
        self.db=pymysql.connect(
            user="root",
            password="2002",
            host="localhost"
        )
        self.cursor=self.db.cursor()
    
    def CreateDB(self):
        self.cursor.execute("CREAte database if not exists pyton")
        self.cursor.execute("use pyton")

    def CreateTB(self):
        self.cursor.execute(''' create table if not exists kompany(
                            id int Auto_increment primary key,
                            first_name varchar(50),
                            second_name varchar(50),
                            phone_namber text ,
                            job_id text,
                            salary real
                             )''')

    def InsertTB(self,name,secon_name,namber,job_id,salary):
        self.cursor.execute(f''' insert into kompany(first_name,second_name,phone_namber,job_id,salary)
                            values("{name}","{secon_name}","{namber}","{job_id}",{salary})''') 
        self.db.commit()

    def savol1(self):
        self.cursor.execute("select first_name as Ism ,second_name as Familiya from kompany ")
        natija=self.cursor.fetchall()
        print(natija)

    def savol2(self):
        self.cursor.execute("select first_name as Ism , second_name as Familiya , salary as maosh from kompany where job_id like '%IT_PROG%'")
        natija=self.cursor.fetchall()
        print(natija)
    
    def savol3(self):
        self.cursor.execute("select job_id,salary from kompany where salary>5000 and salary<20000")
        natija=self.cursor.fetchall()
        print(natija)
    
    def savol4(self):
        self.cursor.execute("select * from kompany where phone_namber like '%6983'")
        natija=self.cursor.fetchall()
        print(natija)
    
    def savol5(self):
        self.cursor.execute("select sum(salary)from kompany")
        natija=self.cursor.fetchall()
        print(f"Jami {natija}")

    def savol6(self):
        self.cursor.execute("select * from kompany where job_id='IT_PROG' order by salary desc limit 1")
        natija=self.cursor.fetchall()
        print(natija)    
   
    def savol7(self):
        self.cursor.execute("select * from kompany where (select avg(salary) from kompany)<salary")
        natija=self.cursor.fetchall()
        print(natija)
    
    def savol8(self):
        self.cursor.execute("select * from kompany where   (select avg(salary) from kompany where job_id='IT_PROG')<salary")
        natija=self.cursor.fetchall()
        print(natija)
    
    def Info(self):
        self.cursor.execute("select * from kompany ")
        natija=self.cursor.fetchall()
        print(natija)


a=MySQL()
for i in range(14):
    print(f"{i+1} chi odam malumotini kiriting: ")
    a.InsertTB(input("name : "),input("FAmilya :"),input("nomeri : "),input("job_id : "),int(input("SAlary: ")))

while True:
    print()
    print('''1 chi savol ----> 1
2 chi savol ----> 2
3 chi savol ----> 3
4 chi savol ----> 4
5 chi savol ----> 5
6 chi savol ----> 6
7 chi savol ----> 7
8 chi savol ----> 8
Info        ----> 9
Exit        ----> 10''')
    b=int(input("--> "))
    if b==1:
        a.savol1()
    elif b==2:
        a.savol2()
    elif b==3:
        a.savol3()
    elif b==4:
        a.savol4()
    elif b==5:
        a.savol5()
    elif  b==6:
        a.savol6()
    elif b==7:
        a.savol7()
    elif b==8:
        a.savol8()
    elif b==9:
        a.Info()
    elif b==10:
        print("Dastur yakunlandi;")
        break
    else :
        print("Noto'g'ri tanlov;")
