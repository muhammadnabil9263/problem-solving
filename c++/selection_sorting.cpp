#include <iostream> 
using namespace std ; 
int main (){
int arr[5]= {100,50,70,4,30};
int  x ; 
for (int i = 0; i < 4; i++){   

    for (int j=i+1 ; j < 5; j++)
    {
        if (arr[i]>arr[j]){
            x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
        }
    }
}
                                                                   
for (int index = 0; index < 5; index++){
   cout << arr[index] << " ";
}


return 0 ; 
}