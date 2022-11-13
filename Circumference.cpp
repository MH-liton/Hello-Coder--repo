#include<bits/stdc++.h>
using namespace std;

int main()
{
    double R, Circle;
    double pi=3.1416;

    while (cin>> R)
    {
        Circle = (2*pi*R);

        cout<< fixed << setprecision(2) << Circle <<endl;
    }
    
    return 0;
}