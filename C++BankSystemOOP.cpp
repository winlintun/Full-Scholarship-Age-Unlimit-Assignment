#include <iostream>
#include <string.h>
#include "strings.h"
using namespace std;

class BankAccount {
private:
    int card_id;
    string username;
    string password;
    int amount;
    int getu;

    
public:
    
    void creteAccount(int id, string user, string pwd, int amt) {
            card_id = id;
            username = user;
            password = pwd;
            amount = amt;
    }
    
    void loginAccount(int id, string user, string pwd) {
        if (username == user && card_id == id && password == pwd ) {
            card_id = id;
            username = user;
            password = pwd;
        } else {
            cout << "Wrong input!";
        }
    }
    
    bool islogin(int id) {
        if (card_id != id) {
            cout << "user data is not found." << endl;
        }
    }
    
    
    int balance_check(){
       return amount; 
    }
    
    void check_account(){
        cout<<"Card id: "<< card_id <<endl;
        cout<<"User name: " << username << endl;
        cout << "Password: " << password << endl;
        cout << "Balance: " << amount << endl;
    }
    
    int deposit(int dep){
        cout<<"You deposit amount is: "<< dep << endl;
        
        if(dep < 0 )
            cout << "Can't deposit!"<<endl;
        amount += dep;
        return amount;
    }

    int widthdraw(int w_amt){
        cout<<"You withdraw amount is: "<< w_amt << endl;
       if(amount < w_amt) {
           cout<<"Your money is low.\nCan't withdraw money"<<endl;
       }
       amount -= w_amt;
       return amount;
    }

};

class SecureBank: public BankAccount {
public:
        
};



int main()
{
    int id=0;
    string usr;
    string pwd;
    int amt=0;
    int getnum=0;
    int i=1;
    
    SecureBank user1;
    
    while (i != 0) {
        cout<<"1.Register Account."<< "\n2.Login Account." <<"\n0.Exiting"<<"\n>:"; cin >> getnum;
    
        if (getnum == 1) {
            // get data 
            cout<<"Enter id number: ";cin>>id;
            cout<<"Enter username: ";cin>>usr;
            cout<<"Enter password: ";cin>>pwd;
            cout<<"Enter balance: "; cin>>amt;
            user1.creteAccount(id, usr, pwd, amt);
        } else if (getnum == 2) { 
            cout<<"Enter id number: ";cin>>id;
            if (user1.islogin(id) == NULL) {
                exit(1);
            }
            // get data 
            cout<<"Enter username: ";cin>>usr;
            cout<<"Enter password: ";cin>>pwd;
            user1.loginAccount(id, usr, pwd);
        }
        else {
            cout << "Exitin program." << endl;
            i=0;
        }
        
        while(getnum != 0) {

            cout<< "1.Despoit money."<<"\n2.Withdraw money."<<"\n3.Balance check." << "\n4.Account Check."<<"\n0.Exiting"<<"\n>:"; cin>>getnum;
            
            if (getnum == 1) {
                int dep_amt;
                cout<<"Enter deposit amount: "; cin >> dep_amt;
                user1.deposit(dep_amt);

            } else if (getnum == 2) {
                int wit_amt;
                cout<<"Enter withdarw amount: "; cin >> wit_amt;
                user1.widthdraw(wit_amt);

            } else if (getnum == 3) {
                cout<< user1.balance_check()<<endl;;

            } else if (getnum == 4) {
                user1.check_account();

            } else {
                cout<<"Wrong option!\n";
                break;
            }
        }
        
        
    }
            
    return 0;
}
