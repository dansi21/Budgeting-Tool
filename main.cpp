#include <iostream>
#include <time.h>
#include <fstream>
#include <stdlib.h>


using namespace std;


int daysLeft(char[]);
void init();
int moneyLeft();


string name;
double total;
string date;

int main()
{
    ifstream fileTest;
    fileTest.open("data.dat");
    if(!fileTest.is_open()){
        init();
    }
    else{
        fileTest >> name;
        fileTest >> total;
        fileTest >> date;
    }
    switch


    cout << "Hello world!" << endl;
    return 0;
}

void init(){

    cout << "Hello New User!" << endl;
    cout << "To set things up I'll need some info real quick!" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Username: ";
    cin >> name;
    cout << "------------------------------------------------" << endl;
    cout << "Start Amount: ";
    cin >> total;
    cout << "------------------------------------------------" << endl;
    cout << "Date: ";
    cout << "------------------------------------------------" << endl;
    system("cls");
    cout << "------------------------------------------------" << endl;
    cout << "-------------------THANK-YOU--------------------" << endl;
    cout << "------------------------------------------------" << endl;
    system("cls");//gross I know
    return;
}


int moneyLeft(){

    return 0;
}


int daysLeft(char yes[]){

    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int monthPassed = ((yes[0] - '0') * 10) + (yes[1] - '0');
    int daysPassed = ((yes[3] - '0') * 10) + (yes[4] - '0');

    char date[9];
    _strdate(date);

    int totalDays = 0;

    int currentM = ((date[0] - '0') * 10) + (date[1] - '0');
    int currentD = ((date[3] - '0') * 10) + (date[4] - '0');

    for(int i = currentM; currentM != monthPassed; i++){
        if(currentM == 12){
            currentM = currentM-12;
            totalDays = totalDays + months[11];
        }
        else{
            totalDays = totalDays + months[i-1];
        }

    }
    return totalDays;
}
