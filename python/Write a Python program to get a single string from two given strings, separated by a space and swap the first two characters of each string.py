s1  = "abc" 
s2  = "xyz"
def new (s1,s2): 
    string1_asList =[]
    for i in s1 :
        string1_asList.append(i)

    string2_asList =[]

    for i in s2 :
        string2_asList.append(i)

    temp = string1_asList[0] 
    string1_asList[0] =string2_asList[0]
    string2_asList[0]  = temp

    temp = string1_asList[1]
    string1_asList[1]  = string2_asList[1]  
    string2_asList[1]  = temp

    m1 =""
    for i  in  string1_asList :
        m1=m1+i


    m2 =""
    for i  in  string2_asList :
        m2=m2+i
    return m1+" "+m2 
    
print ( new (s1 , s2))




