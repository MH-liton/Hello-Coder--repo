#include<bits/stdc++.h>
using namespace std;

int main()
{
    double S, Diagonal;

    while (cin>> S)
    {
        Diagonal = (S*(sqrt(2)));
        cout<< fixed << setprecision(2) << Diagonal <<endl;
    }
    

    return 0;
}