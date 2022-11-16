//
// Created by Win Lin Tun on 11/15/2022.
//
#include "iostream"
using namespace std;
#ifndef C__PROJECTIDE_CYCLE_H
#define C__PROJECTIDE_CYCLE_H

#define SIZE 1000


namespace NCC_CYCLE {
    class cycle {
    public:
        int database[SIZE];
        int allUserTicket[SIZE]={0};
        string userPhone[SIZE];
        int userAmount[SIZE];
        int userTicket[SIZE];
        string userName[SIZE];
        int price = 1000;
        int my_index = 0;
        int user_index = 0;

        void welcome();
        void createAccount();
        void buyTicket();
        int binarySearch(int value);
        void showDatabase();
        void infoUserBuyTicket();
        void paymentTicket(string username);
        void userInfo();

    };
};




#endif //C__PROJECTIDE_CYCLE_H
