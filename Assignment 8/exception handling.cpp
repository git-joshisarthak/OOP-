#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the no. a: ";
    cin >> a;

    cout << "Enter the no. b: ";
    cin >> b;

    try
    {
        // Test whether the divisor b equals zero
        if (b == 0)
        {
            throw b;
        }

        // Carry out the division operation
        c = a / b;
        cout << "\nDiv is " << c;
    }

    // Handle the exception thrown above
    catch (int x)
    {
        cout << "Arithmetic error\n";
        cout << "Divide by " << x;
    }

    // Execution carries on normally once the exception is handled
    cout << "\nAfter div op.";

    return 0;
}
