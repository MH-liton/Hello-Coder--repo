#include<bits/stdc++.h>
using namespace std;

int main()
{
    int S;             // area of length;
    float l, V_cube;

    while (cin>> S)
    {
        l = (sqrt((S*1.0)/6));

        V_cube = ((pow(l,2))*l);
        cout<< fixed << setprecision(2) << V_cube << endl;
    }
    
    return 0;
}