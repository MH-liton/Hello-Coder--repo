#include<bits/stdc++.h>
using namespace std;

int main()
{
    float F, Celcius;
    
    while(cin>> F)
    {
         Celcius = (((F-32)*5)/9);

         cout <<fixed << setprecision(2)<< Celcius << " C" <<endl;
    }
   
    return 0;
}