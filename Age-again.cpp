#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, Daughter, Father;

    while (cin>> x)
    {
        Daughter = (x/5);     // x + 4x = 5x     // Father's age is four times the age of the daughter.;
        Father = (Daughter*4); 
        cout<< Father << " " << Daughter <<endl;
    }
    


    return 0;
}