#include <iostream>
using namespace std;

int main()
{
    int check=0;
    int hour = 12;
    while(check<=3){
        cout << hour;
        if(check == 0){
            cout << " " << "midnight";
            check++;
            hour = 1;
            cout << endl;
            continue;
        }
        if(check == 1){
            cout << "am";
            hour++;
            if(hour == 12){check++; cout << endl;}

        }
        if(check == 2){
            cout << "12 noon";
            check++;
            hour = 1;
            cout << endl;
            continue;
        }
        if(check == 3){
            cout << "pm";
            hour++;
            if(hour == 12)check++;
        }
        cout << endl;
    }
}