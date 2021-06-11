#include <iostream> 
#include <array>
using namespace std;

int main (){
int array[5] = {9,5,3,7,2};

// inserstion sort 
int j ,temp ; 
for ( int i = 1; i <=4; i++ ) {
    j=i;
    while((j>0)&&(array[j]<array[j-1]))
    { //swap
    temp = array[j]; 
    array[j]=array[j-1]; 
    array[j-1]=temp;
    j--;    
    }
}

// print array

for (int i = 0; i < 5; i++){
    cout << array[i];  
}



return 0 ; 
}