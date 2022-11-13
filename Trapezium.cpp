#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, B, Area;

    while (cin>> a >> b)
    {
        B = a*2;
        Area = ((a+B)/2)*a;               // One side is Height that's mean a;
        cout<< fixed <<setprecision(2) << Area <<endl;
    }
    


    return 0;
}