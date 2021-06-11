#include <iostream> 
using namespace std ; 

int main (){

int arr[7] = {1,2,34,76,15,8,17};

for (int i = 6 ; i > 0 ; i--){   
    int x=0 ; 
   for (int j= i-1 ; j>=0 ;j--){
       if (arr[i]<arr[j]){
            x = arr[i];
            arr[i]=arr[j];
            arr[j]=x;
       
       }
   }
   
}

for (int i = 0; i < 7; i++)
{
    cout << arr[i] << " ";
}


return  0 ;
} 