//Name: Sarthak Joshi
//PRN:B25ET1064
//Div:SY1 , Batch: C1
#include <iostream>
using namespace std;

// create Class representing a Complex Number 
class Complex
{
    float real, imag; // variables declaration for real and imaginary parts

public:
    // Takes user input for real and imaginary parts
    void accept()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Prints complex number in 'a + bi' or 'a - bi' format
    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    // Adds two complex numbers: (a + c) + (b + d)i
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Multiplies two complex numbers: (ac - bd) + (ad + bc)i
    Complex multiply(Complex c)
    {
        Complex temp;
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }

    // Subtracts two complex numbers: (a - c) + (b - d)i
    Complex subtract(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Divides complex number using denominator formula (c^2 + d^2)
    Complex divide(Complex c)
    {
        Complex temp;

        float denominator = c.real * c.real + c.imag * c.imag;

        temp.real = (real * c.real + imag * c.imag) / denominator;
        temp.imag = (imag * c.real - real * c.imag) / denominator;

        return temp;
    }

    // Returns complex conjugate by fliping sign of imaginary part (a - bi)
    Complex conjugate()
    {
        Complex temp;
        temp.real = real;
        temp.imag = -imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, result; // create Objects for operations

    cout << "Enter first complex number:\n";
    c1.accept();

    cout << "\nEnter second complex number:\n";
    c2.accept();

    // Perform addition and display outputs
    cout << "\nAddition: ";
    result = c1.add(c2);
    result.display();

    // Perform Multiplication and display outputs
    cout << "Multiplication: ";
    result = c1.multiply(c2);
    result.display();

    // Perform Subtraction and display outputs
    cout << "Subtraction: ";
    result = c1.subtract(c2);
    result.display();

    // Perform Division and display outputs
    cout << "Division: ";
    result = c1.divide(c2);
    result.display();

    // make conjugate and display outputs
    cout << "Conjugate of first number: ";
    result = c1.conjugate();
    result.display();

    return 0; // end of main function
}
