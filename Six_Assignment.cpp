//
// Created by Win Lin Tun on 9/30/2022.
//
#include <iostream>
using namespace std;

class Car{
private:
    int engin=0;

public:
    int gas=0;
    int speed=0;
    string currentColor;

    Car() {
        cout<<"Welcome to our car system!"<<endl;
    }

    int color_select();
    int addGas(int liter);
    int isGasEmpty();
    int getEngin();
    int checkEngin();
    int speed_Up_Down();
    int allInfo();
    int isDrive();


};

int Car::isDrive() {
    int num =0;
    cout<<"1. Drive"<<endl;
    cout<<"2. Stop."<<endl;
    cout<<"Enter: ";
    cin>>num;

    if(num == 1) {
        speed_Up_Down();
        allInfo();
    } else if (num == 2) {
        cout<<"Car are now stop"<<endl;
        engin--;
        allInfo();
        exit(1);
    }
}

int Car::allInfo() {
    cout<<"======================"<<endl;
    cout<<"Enger: "<<engin<<endl;
    cout<<"Gas: "<<gas<<" liters left"<<endl;
    cout<<"Color: "<<currentColor<<endl;
    cout<<"Speed: "<<speed<<" per hour"<<endl;
    cout<<"======================"<<endl;
}

int Car::speed_Up_Down() {
    int choose=0;
    int speed_car =0;
    int c_speed[5] = {20, 40, 60, 80, 100};
    int size = sizeof(c_speed) / sizeof(c_speed[0]);

    cout<<"Car speed: "<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<c_speed[i]<<endl;
    }

    cout<<"Enter speed: ";
    cin>>speed_car;

    cout<<"1.Speed Up\n"<<"2.Speed Down"<<endl;
    cout<<"Enter: ";
    cin>>choose;
    if(choose == 1){
        for (int j = 0; j < size; ++j) {
            if(speed_car == c_speed[j]) {
                speed += speed_car;
                gas -= 2;
            }
            else
                cout<<"Invalid"<<endl;
        }
        cout<<"Car speed up: "<< speed << endl;
        allInfo();
    }
    else if (choose == 2){
        for (int j = 0; j < size; ++j) {
            if(speed_car == c_speed[j]){
                speed -= speed_car;
            }
            else {
                cout<<"Invalid"<<endl;
            }
        }
        if(speed == 0) {
            cout<<"Car are stop now."<<endl;
            engin--;
        }
        cout<<"Car speed down: " <<speed<<endl;
        allInfo();
    }
}


int Car::checkEngin() {
    if (engin == 0) {
        cout<<"Engin not yet started."<<endl;
        return 0;
    } else {
        cout<<"Engin started."<<endl;
        return 1;
    }
}


int Car::getEngin() {
    engin++;
}

int Car::isGasEmpty() {

    if (gas > 0) {
        cout<<"Liters "<<gas<<" remain."<<endl;
        return 1;
    } else {
        return 0;
    }
}


int Car::addGas(int liter) {
    if(isGasEmpty() >= 0) {
        gas += liter;
    }

    cout<<gas<<" liters"<<endl;
}


int Car::color_select() {
    int num=0;
    string carColor[4] = {"Blue", "Yellow", "Green", "White"};

    for (int i = 0; i < 4 ; ++i) {
        cout<<i<<". "<<carColor[i]<<endl;
    }

    cout<<"Enter option: ";
    cin>>num;

    for (int j = 0; carColor[j] != "\0"; ++j) {
        if(carColor[j] == carColor[num])
            currentColor = carColor[num];
    }
    cout<<"car color: "<<currentColor<<endl;

}

int mainMenu(){
    Car mycar;
    int liter=0;
    int user=10;

    while(user != 0) {
        cout<<"======================"<<endl;
        cout<<"1. New Start Car Setup..."<<endl;
        cout<<"2. Drive the car..."<<endl;
        cout<<"======================"<<endl;
        cout<<"Enter: ";
        cin>>user;

        if (user == 1) {
            cout<<"Car engin initialization....."<<endl;
            mycar.getEngin();
            if(mycar.checkEngin() == 0) {
                cout<<"Engin couldn't start."<<endl;
                break;
            }
            mycar.color_select();
            if(mycar.isGasEmpty() == 0){
                cout<<"Please gas fill"<<endl;
                cout<<"Enter Liter: ";
                cin>>liter;
                mycar.addGas(liter);
                if(liter==0){
                    break;
                }
            }
            mycar.allInfo();
            mycar.isDrive();
        } else if (user == 2) {
            if(mycar.checkEngin() == 0) {
                cout<<"Engin couldn't started."<<endl;
                cout<<"Go to start new car initialization"<<endl;
                break;
            }
            if(mycar.isGasEmpty() == 0){
                cout<<"Please gas fill"<<endl;
                cout<<"Enter Liter: ";
                cin>>liter;
                if(liter==0){
                    break;
                }
            }
            mycar.allInfo();
            mycar.isDrive();
        }
    }

    mycar.addGas(liter);
}


int main()
{

    mainMenu();

    return 0;
}

