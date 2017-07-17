#include <iostream>
#include <time.h>
#include <fstream>


using namespace std;


int daysLeft(char[]);
void init();
int moneyLeft();


int main()
{
    ifstream fileTest;
    fileTest.open("data.dat");
    if(!fileTest.is_open()){
        init();
    }

    cout << "Hello world!" << endl;
    return 0;
}

void init(){

    cout << "Hello New User!" << endl;
    cout << "To set things up I'll need"
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
