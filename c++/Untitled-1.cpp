#include <iostream>
using namespace std ; 

int sum (int n );

int main (){    
 int c = sum (5);
 cout << c ; 
return 0 ;  

}


int sum (int n ){

 if (n>=0)
        return n+sum(n-1);
    else
        return 0;

}