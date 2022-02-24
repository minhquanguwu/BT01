#include <iostream>
using namespace std;

int main()
{
    int n;
    while(1>0)
    {
        cin >> n;
        if(n>0 && n%5==0) cout << n/5 << endl;
        else cout << "-1" << endl;
        if(n==-1){
            cout <<"BYE";
            break;
        }
    }
    return 0;
}