// // #include <iostream>
// // using namespace std;
// // // function declaration:
// // double getAverage(int *arr, int size);
// // int main () {

// // // int var = 20; // actual variable declaration.
// // // int *ip; // pointer variable
// // // ip = &var; // store address of var in pointer variable
// // // cout << "Value of var variable: ";
// // // cout << var << endl;
// // // // print the address stored in ip pointer variable
// // // cout << "Address stored in ip variable: ";
// // // cout << ip << endl;
// // // // access the value at the address available in pointer
// // // cout << "Value of *ip variable: ";
// // // cout << *ip << endl;


// // // --------------------------------------------------------------------

// // // int MAX =3 ; 
// // // int var[MAX] = {10, 100, 200};
// // // int *ptr [MAX];


// // // for (int i = 0; i < MAX; i++) {
// // //    ptr[i]=&var[i];
// // // }

// // // for (int i = 0; i < MAX; i++) {
// // //    c
   
// // //    out << *ptr[i]<<endl;
// // //    cout << ptr[i]<<endl;
// // // }

// // // --------------------------------------------------------------------



// // // an int array with 5 elements.
// // int balance[5] = {1000, 2, 3, 17, 50};
// // double avg;
// // // pass pointer to the array as an argument.
// // avg = getAverage( balance, 5 ) ;
// // // output the returned value
// // cout << "Average value is: " << avg << endl;






// // return 0;
// // }


// // double getAverage(int *arr, int size) {
// // int i, sum = 0;
// // double avg;
// // for (i = 0; i < size; ++i) {
// // sum += arr[i];
// // }
// // avg = double(sum) / size;
// // return avg;
// // }



// #include <iostream>
// using namespace std;
// // function to generate and retrun random numbers.
// int * getValue( ) {
   
//     static int x[5] = {99,7,6,6,5};
   
//     return x;
// }
// // main function to call above defined function.
// int main () {
// // a pointer to an int.
// int *p;
// p = getValue();
// cout<<*p<<"\n"; cout<<*(p+1);
// return 0;
// }