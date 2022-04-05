class Mark_sheet:
    def __init__(self,name,age,roll_no):
        self.name=name
        self.age=age
        self.roll_no=roll_no
    def per(self,s1,s2,s3):
        per=((s1+s2+s3)/300)*100
        print("Student name:",self.name)
        print("Percentage :",per)
        return per
    def grade(self,per):
        if(per>=80  and per<=100):
            print("Grade : A")
        elif(per>=60  and per<=79):
            print("Grade : B")
        elif(per>=40  and per<=59):
            print("Grade : C")
        else:
            print("Grade : Fail")
std_1=Mark_sheet("Anum",21,4)
std_2=Mark_sheet("Aneela",22,6)
std_3=Mark_sheet("Hafsa",21,8)
std_4=Mark_sheet("Sibra",19,9)
per_1=std_1.per(88,100,80)
std_1.grade(per_1)
per_2=std_2.per(95,60,80)
std_2.grade(per_2)
per_3=std_3.per(58,67,40)
std_3.grade(per_3)
per_4=std_4.per(98,60,89)
std_4.grade(per_4)
