#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D, OneA, OneB, Total;

        while(cin>> A >> B >> C >> D)
        
        {
            OneA = A*B;
            OneB = C*D;
            Total = (OneA-OneB);
            
            cout<< Total <<endl;
        }
        
    
    
    return 0;
}
