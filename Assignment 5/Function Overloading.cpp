//Name: Sarthak Joshi
//PRN:B25ET1064
//Div:SY1 , Batch: C1
#include <iostream>
using namespace std;

// Adds three float numbers
float add(float i, float j, float k)
{
    return (i+j+k);
}

// Adds two integers
int add (int a, int b)
{
    return (a+b);
}

// Adds two floats but saves result into integer return type
int add(float m, float n)
{
    return (m+n);
}

int main()
{
     // takes 3 float numbers & prints total in float
     cout<<add(63.6f, 20.4f, 11.6f)<<endl;

     // takes 2 integer numbers & prints total in integr
     cout<<add(75, 25)<<endl;  

     // takes 2 float numvers but prints total in integer
     cout<<add(66.43f, 55.43f)<<endl;  

     return 0;// end of main function
}
