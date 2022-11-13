#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2, A, B, Diff;
    float Result;
    while (cin>> x1 >> x2 >> y1 >> y2)
    {
        A = x1-x2;
        B = y1-y2;
        Diff = ((pow(A,2)) + (pow(B,2)));
        Result = sqrt(Diff);
        cout<< fixed << setprecision(2) << Result <<endl;
         
    }

    return 0;
}