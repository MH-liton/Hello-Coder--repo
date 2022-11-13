#include<bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 3.1416, radius, radius1, Area, Area1, Area2, Total;
    double r;

    while (cin>> r)
    {
        radius = (r/2);
        radius1 = (radius/2);

        Area =  (pi*(pow(r,2)));
        Area1 = (pi*(pow(radius,2)));
        Area2 = (pi*(pow(radius1,2)));

        Total = (Area + Area1 + Area2); 
        cout<< fixed << setprecision(2) << Total <<endl;
    }
    

    return 0;
}