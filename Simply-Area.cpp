#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double H, Width, Rectangle, Triangle;

    while (cin>> H)
    {
        Width = (H*4);

        Rectangle = (Width*H);
        Triangle = (Rectangle*0.5);

        cout<< fixed << setprecision(2) << "Area of Rectangle: " << Rectangle <<endl;   

        // The ceiling of a number is the smallest integer number that is greater than or equal to the given number.    
        
        cout<< fixed << setprecision(0) << "Area of Triangle: " << ceil(Triangle) <<endl;
    }
    


    return 0; 
}