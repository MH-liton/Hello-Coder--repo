#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int M, N, Rima, Tina, Total;
   

    while (cin>> M >> N)
    {
        Rima = N-M;
        Tina = (Rima * 3);

        Total =(Rima+Tina+M);

        cout << Total <<endl;
    }
    
    
    return 0;
}
