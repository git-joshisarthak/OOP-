//Name: Sarthak Joshi
//PRN:B25ET1064
//Div:SY1 , Batch: C1
#include<iostream>
using namespace std;

// Calculates the Binomial Coefficient 
int BinoCoef(int n, int k)
{
    int res = 1;

   
    // Minimizes the number of loop iterations for efficiency
    if (k > n - k)
        k = n - k;
    
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i); // Multiply next term in numerator
        res /= (i + 1); // Divide next term in denominator
    }

    return res; // Returns the combination value
}

// Prints Pascal Triangle with 'n' rows
void printPascal(int n)
{
    // Outer loop controls row numbers (0 to n-1)
    for (int l = 0; l < n; l++)
    {
        // Inner loop controls numbers per row (0 to l)
        for (int m = 0; m <= l; m++)
        {
            // Print C(l, m) which gives the value at row 'l' and column 'm'
            cout << " " << BinoCoef(l, m);
        }
        
        // Move to the next line for next row 
        cout << endl;
    }
}
    
int main()
{
    int n = 7;        // Set total rows to print
    printPascal(n);   // function call
    return 0;         // end of the main function
}
