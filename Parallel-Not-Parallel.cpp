#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1, b1, c1, a2, b2, c2, A, B;

    while (cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2)
    {
        A = a1/a2;
        B = b1/b2;
        if(A == B)
        {
            cout<< "The lines are parallel." <<endl;
        }
        else
        {
            cout<< "The lines are not parallel." <<endl;
        }
    }
    


    return 0;
}