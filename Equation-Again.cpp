#include<bits/stdc++.h>
using namespace std;

int main()
{
    double m, Av, Avg, total;
    
    while(cin>> m)
    {
        
        Av = ((1/m)+m);
        Avg = pow(Av,2);
        total = pow(Avg,2);

        cout<< fixed << setprecision(3) << total <<endl;
    }
    return 0;
}