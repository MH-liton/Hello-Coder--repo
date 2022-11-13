#include<bits/stdc++.h>
using namespace std;

int main()
{
    double S, Diagonal, Perimeter;

    while (cin>> S)
    {
        Diagonal = (S*(sqrt(2)));            // length of diagonal is : (S*(sqrt(2)));
        Perimeter = (S*(sqrt(2))) * 2;      // Perimeter is : (S*(sqrt(2))) * 2;
        cout<< fixed << setprecision(2) << Perimeter <<endl;
    }
    

    return 0;
}