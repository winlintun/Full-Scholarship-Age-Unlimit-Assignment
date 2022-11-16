//
// Created by Win Lin Tun on 11/15/2022.
//

#include "cycle.h"
#include "iostream"

using namespace std;
using namespace NCC_CYCLE;

int cycle::binarySearch(int value) {
    int arr_size = sizeof(database) / sizeof(database[0]);
    int low = 0;
    int height = arr_size - 1;

    while (low <= height) {
        int mid = low + (height - low) / 2;
        if(database[mid] == value){
            return mid;// index number
        }
        if (database[mid] < value) {
            low = mid + 1;
        }
        else {
            height = mid - 1;
        }
    }
    return -1;
}

void cycle::showDatabase() {
    // show available ticket
    cout<<"Available Ticket"<<endl;
    for(int j=0; j<SIZE-1; j++) {
        cout<<" "<<database[j];
    }
}


void cycle::welcome() {
    // database initialize
    for(int i =0; i < SIZE; i++) {
        database[i] = i;
    }
    int option=0;


   while(true) {

       cout<<"1. Buy Ticket"<<endl;
       cout<<"2. Payment for Ticket"<<endl;
       cout<<"3. View sold Ticket"<<endl;
       cout<<"4. User Info"<<endl;
       cout<<"5. Available Ticket"<<endl;
       cout<<"6 Exiting Program"<<endl;
       cout<<": "; cin>>option;

       if (option == 1) {
           showDatabase();
           cout<<endl;
           buyTicket();
       } else if (option == 2) {
           string name;
           cout<<"Enter username: "; cin>>name;
            paymentTicket(name);
       } else if (option == 3) {
           infoUserBuyTicket();
       } else if (option == 4) {
           // user info
           userInfo();
       } else if (option == 5) {
           showDatabase();
           cout<<endl;
       }
       else {
           cout<<"Exiting program ....!"<<endl;
           exit(1);
       }
   }

}

void cycle::createAccount() {
    string username;
    string phone;
    int amount=0;

    cout<<"Enter your name: ";
    cin>>username;
    cout<<"Enter your phone: ";
    cin>>phone;
    cout<<"Enter your Amount: ";
    cin>>amount;


    userName[user_index] = username;
    userPhone[user_index] = phone;
    userAmount[user_index] = amount;

    for(int k =0; k < user_index; k++) {
        cout<<"username: "<<userName[k]<<endl;
        cout<<"phone: "<<userPhone[k]<<endl;
        cout<<"amount: "<<userAmount[k]<<endl;
    }

}


void cycle::buyTicket() {
    createAccount();
    cout<<endl;
    int limitTicke=0;
    int value=0;
    cout<<"1 Ticket 1000MMK"<<endl;
    cout<<"How many ticket u buy: ";
    cin>>limitTicke;
    int coutTicket=0;

    int ticket[limitTicke];

    for(int i=0; i<limitTicke; i++) {
        cout<<"Enter your ticket: ";
        cin>>value;

        int result = binarySearch(value); // return database index;
    
        cout<<"B search index: "<<result<<endl;
        
        if(result == 0) {
            cout<<value<<" couldn't buy!"<<endl;
            ticket[i] = 0;
            continue;
        } else if (result == -1) {
            ticket[i] = 0;
            cout<<value<<" couldn't buy!"<<endl;
            continue;
        } else {
            ticket[i] = value;
            allUserTicket[i] = value;
            
            if (value == database[result]) {
                database[result] = NULL;
            }
            coutTicket++;
        }
        

    }
    cout<<"==================="<<endl;
    cout<<"Your ticket number: ";
    for (int j=0; j < limitTicke; j++) {
        cout<<" "<<ticket[j];
    }
    cout<<endl;
    cout<<"==================="<<endl;
    cout<<"Total ticket: "<<coutTicket<<endl;
    cout<<endl;
    userTicket[user_index] = coutTicket; // total ticket
    user_index++;

}

void cycle::infoUserBuyTicket() {
    cout<<"All User Buy Ticket Info"<<endl;

    for(int j=0; j < SIZE; j++) {
        //int result = binarySearch(allUserTicket[j]);
        if(allUserTicket[j] != 0 ) {
            cout<<" "<<allUserTicket[j];
        }
    }

    cout<<endl;
}

void cycle::paymentTicket(string username) {
    for(int i=0; i < user_index; i++) {
        if (username == userName[i]) {
            int balance = userAmount[i];
            int ticket = userTicket[i];

            cout<<"Your main balance is: "<<balance<<" MMK"<<endl;
            cout<<ticket<<" tickets == "<<(ticket * price)<<" MMK"<<endl;
            int rem_balance = balance - (ticket * price);
            userAmount[i] = rem_balance;
            cout<<"Your remain balance are: "<<userAmount[i]<<endl;
        } else {
            cout<<"User name couldn't found"<<endl;
        }
    }
}

void cycle::userInfo() {
    for(int i=0; i < user_index; i++) {
        cout<<"username: "<<userName[i]<<endl;
        cout<<"phone: "<<userPhone[i]<<endl;
        //cout<<"amount: "<<userAmount[i]<<endl;
        cout<<"Total Ticket: "<<userTicket[i]<< " and remain balance: "<<userAmount[i]<<" MMK"<<endl;
    }
}