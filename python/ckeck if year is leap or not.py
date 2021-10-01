# ckeck if input year is leap or not 
def is_leap(year):
    if (year>=1900):
        if (year % 4 ==0):
            if (year%100==0):
                if(year%400==0):
                    return True
                else :
                    return False

            else :
                return True

        else :
            return False

    else :
        return "not valid"

print (is_leap(2300))
