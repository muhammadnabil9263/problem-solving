#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <sstream>

using namespace std ;

struct client
{
    int id ;
    string name ;
    string time ;
};

void addClient( client clients[] , int s );
void updateClient(client clients[]);
void deleteClient(client clients[]);
void showAllclients(client clients[],int s);


int main(){

  

    client clients_array[100]  ; 

// fill all ids with 0
    for (int r =0 ;r<100;r++){
        clients_array[r].id = 0 ;
    }


// get the last that isn't equal 0  and put it in var count 
    int count = 0;
    for (int r =0 ;r<100;r++){ 
        if ( clients_array[r].id != 0 ){
            count ++ ;
        }
    }


    
    int x=1 ; 
    while(x==1){
        int input ; 
        cout << "1) Add new client.\n";
        cout << "2) Update client.\n" ;
        cout << "3) Delete client.\n";
        cout << "4) Show all clients attended the cafe.\n" ;
        cout << "5) Please chose one from above choices\n" ;


        cin >> input ; 
        // add new one to position count
        if (input == 1){ 
            int x=1 ; 
            while(x==1){
                    addClient(clients_array,count);
                    count++;
                    cout <<"\n To add other client press 1 else to exit press 0. ";
                    cin >> x ;
            }
            
        }
        else if (input == 2){
            int x=1 ; 
            while(x==1){
                    updateClient(clients_array);
                    cout <<"\nTo update other client press 1 else to exit press 0. ";
                    cin >> x ;
            }
        }
        else if (input == 3){
            int x=1 ; 
            while(x==1){
                deleteClient(clients_array);
                count--;
                    cout <<"\nTo delete other client press 1 else to exit press 0. ";
                    cin >> x ;
            }
        }
        else if (input == 4){
                showAllclients(clients_array,count);
        }
        
        cout <<"\n To do another operation  press 1 else to exit press 0. ";
        cin >> x ;
    
    }


    return 0 ; 
}

void addClient( client clients[] , int s ){
int i = s ; 
client c ;
cout << "Please enter the id of the client entered the cafe: ";
cin >> c.id;

int flag = 0 ;
while (flag == 0){
    for (int j =0; j<s+1 ; j++ ){
        if(clients[j].id == c.id){
        cout << "this id is already taken \n";
        cout << "Please enter another id of the client entered the cafe: ";
        cin >> c.id;
        break;
        }else{
            flag++;
        } 
    }
}
cout <<"Please enter the time the client entered the cafe: ";
cin >> c.time;
cout << "Please enter the  client’s name: ";
cin >> c.name;

 clients[i]=c;

  for(i=0; i< s+1 ; i++)
        cout<<clients[i].id<<"  "; 
    cout<<endl;
}

void updateClient(client clients[]){
client c ; 

cout << "Please enter the id of the client to update: ";

cin >> c.id;

    int i = 0;
    while (i < 100)
    {
        if (clients[i].id == c.id) {
            break;
        }
        i++;
    }

    if (i < 100)
    { 
    cout << "Please enter the new time of the client: ";
    cin >> c.time;
    cout <<" Please enter the new name of the client: ";
    cin >> c.name;

    clients[i] = c ;
    cout << "client with id " << c.id << " is updated"  ;
    }
    else {
        cout << "Element is not present in the given array";
    }

}

void deleteClient(client clients[]){

    int i = 0 , id ;
    cout << "Please enter the id of the client to delete: ";
    cin >> id ;
   
    while (i < 100) {
        if (clients[i].id == id) {
            break;
        }
        i++;  }

    if (i < 100){ 
        for (int j = i ; j<99; j++){
        clients[j] = clients[j+1];}
        cout <<  "item deleted";
        
    }

}

void showAllclients(client clients[],int s ){

 for(int i=0;  i < s ; i++)
        {cout<< "id "<< clients[i].id << " , "<<"name: "<<clients[i].name << " , "<<"time: "<< clients[i].time << "\n";  
        cout<<endl;}
}



