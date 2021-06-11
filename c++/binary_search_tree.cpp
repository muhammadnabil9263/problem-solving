#include <iostream>
using namespace std ;

int binary_search_tree(int arr[] , int low , int high , int key); 

int main (){

int arr [9]= {1,2,3,5,6,7,8,9,10};
int  index_of_key = binary_search_tree(arr,0,9,3);
cout << index_of_key; 

 return 0 ; 
 }

int binary_search_tree(int arr[] , int low , int high , int key){

    
    while ( low <= high ){
    int middle = (low + high) / 2;
    if (arr[middle] == key ){
        return middle ; 
    }else if (arr[middle] > key){
        high = middle-1; 
    }else {
        low = middle+1 ;
    }
}    
return -1 ; 
}



