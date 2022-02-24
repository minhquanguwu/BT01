#include <iostream>
using namespace std;

int main()
{
    double n,x,sum,min=1e6,max=-1e6;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        sum+=x;
        if(x<min) min = x;
        if(x>max) max = x;
    }
    sum = sum / n;
    cout <<"MEAN:" << sum << endl;
    cout <<"MAX:" << max << endl;
    cout <<"MIN:" << min << endl;
}