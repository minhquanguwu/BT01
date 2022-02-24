#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string s[100];
    s[0]="a";
    s[1]="b";
    for(int i=2;i<=10;i++)
        s[i]=s[i-1]+s[i-2];
    return 0;
}