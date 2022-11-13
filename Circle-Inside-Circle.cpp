#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r, R, Circle1, Circle2, Total;
    double pi=3.1416;

    while (cin>> r >> R)
    {
        Circle1 = (pi*(pow(r,2)));
        Circle2 = (pi*(pow(R,2)));

        Total = (Circle2-Circle1);

        cout<< fixed << setprecision(2) << Total <<endl;
    }
    
    return 0;
}