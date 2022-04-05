
   
print("First student enter marks:")
st_1_phy=(int(input("Enter marks of physics")))
st_1_cem=(int(input("Enter marks of chemistry")))
st_1_mat=(int(input("Enter marks of maths")))
per_st_1=((st_1_phy+st_1_cem+st_1_mat)/300)*100
data=0
if(per_st_1>85):
    remarks_1="Distinction"
    data+=20
else:
     reamrks_1="Without Distinction"
        
print("Second student enter marks:")
st_2_phy=(int(input("Enter marks of physics")))
st_2_cem=(int(input("Enter marks of chemistry")))
st_2_mat=(int(input("Enter marks of maths")))
per_st_2=((st_2_phy+st_2_cem+st_2_mat)/300)*100        
if(per_st_2>85):
    remarks_2="Distinction"
    data+=20
else:
    reamrks_2="Without Distinction"
print("Third student enter marks:")
st_3_phy=(int(input("Enter marks of physics")))
st_3_cem=(int(input("Enter marks of chemistry")))
st_3_mat=(int(input("Enter marks of maths")))
per_st_3=((st_3_phy+st_3_cem+st_3_mat)/300)*100        
if(per_st_3>85):
    remarks_3="Distinction"
    data+=20
else:
     reamrks_3="Without Distinction"
print("Fourth student enter marks:")
st_4_phy=(int(input("Enter marks of physics")))
st_4_cem=(int(input("Enter marks of chemistry")))
st_4_mat=(int(input("Enter marks of maths")))
per_st_4=((st_4_phy+st_4_cem+st_4_mat)/300)*100        
if(per_st_4>85):
    remarks_4="Distinction"
    data+=20
else:
     reamrks_4="Without Distinction"
print("Fifth student enter marks:")
st_5_phy=(int(input("Enter marks of physics")))
st_5_cem=(int(input("Enter marks of chemistry")))
st_5_mat=(int(input("Enter marks of maths")))
per_st_5=((st_5_phy+st_5_cem+st_5_mat)/300)*100        
if(per_st_5>85):
    remarks_5="Distinction"
    data+=20
else:
    reamrks_5="Without Distinction"
from matplotlib import pyplot as plt
import numpy as np
Remarks=["Student With Distinction","Student Without Distinction"]
data_i=100-data
data_f=[data,data_i]
fig=plt.figure(figsize=(10,7))
plt.pie(data_f,labels=Remarks)
plt.title("PIE CHART")
plt.legend(title="Distinction")
plt.show()

