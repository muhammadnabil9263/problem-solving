#include <iostream>
using namespace std ; 

void linear_search( int arr[],int val);

int main (){
 
cout << "enter 10 numbers" << "\n";
   int arr[10]={} ;
for (int index_for_number = 0 ; index_for_number <10 ; index_for_number ++)
    {
        cout << "enter value "  << index_for_number+1 << " : "; 
        cin  >> arr[index_for_number] ;
    }
    linear_search(arr , 20);

 return 0 ;     
 }


void linear_search( int arr[],int val){
    for (int index = 0 ; index < 10 ; index++ ){
        if (arr[index]==val){
            cout << "index is for value 20 : "<< index + 1 <<"\n" ;  
        }
    }
}