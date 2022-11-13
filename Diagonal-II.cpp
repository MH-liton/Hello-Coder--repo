#include<bits/stdc++.h>
using namespace std;

int main()
{
    double H, Width, Dia, Diagonal;

    while (cin>> H)
    {
        Width = (1.5 * H); 

        Dia = (pow(Width,2) + pow(H,2));
        Diagonal = (sqrt(Dia));
        
        cout<< fixed << setprecision(2) << Diagonal <<endl;
    }
    

    return 0;
}