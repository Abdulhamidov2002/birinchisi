class CASHMACHINE:
    def sharel1(self,l1,l2):
        l1-=1
        l2+=3
        return [l1,l2]

    def sharel2(self,l1,l2):
        l2-=1
        l1+=3
        return [l1,l2]

c=CASHMACHINE()
l1,l2=3,3
while True:
    a=int(input("""1-odam tangani 'share' qilishi uchun 1 
1-odam tangani 'steal' qilishi uchun 2 
2-odam tangani 'share' qilishi uchun 3
2-odam tangani 'steal' qilishi uchun 4
Dasturni to'xtatish uchun            5
----> """))
    print(a)
    if a==1:
        if l1>0:
            b=c.sharel1(l1,l2) 
            l1=b(0)
            l2=b(1)
        else:
            print("1-odamda tangalar soni 0 ta qoldi va share qilish imkonsiz.")       
    elif a==2:
        pass
    elif a==3:
        if l2>0:
            b=c.sharel2(l1,l2)
            l1=b(0)
            l2=b(1)
        else :
            print("2-odamda tangalar soni 0 ta qoldi va share qilish imkonsiz.") 
    elif a==4:
        pass
    elif a==5:
        print(f'[{l1},{l2}]')
        break
    else :
           print(a)
           print("Notogri tanlov;")
     