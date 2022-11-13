#include<bits/stdc++.h>
using namespace std;

int main()
{
    double X, Y, Total;
    while (cin>> X >> Y)
    {
        Total = (Y/X);
        cout<< fixed << setprecision(3) << Total << " liter" <<endl;
    }
    
    return 0;
}