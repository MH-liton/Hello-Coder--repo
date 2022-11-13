#include<bits/stdc++.h>
using namespace std;

int main()
{
    double  W, P, Height, Perimeter;

    while (cin>> W >> P)
    {
        Height = (W * P) / 100; 
        Perimeter = (2*(W+Height));
        
        cout<< fixed << setprecision(2) << Perimeter <<endl;
    }
    

    return 0;
}