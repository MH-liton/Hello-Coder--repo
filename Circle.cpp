#include<bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 3.1416, Area;
    int r;

    while (cin>> r)
    {
        Area = (pi*(pow(r,2)));
        cout<< fixed << setprecision(2) << Area <<endl;
    }
    

    return 0;
}