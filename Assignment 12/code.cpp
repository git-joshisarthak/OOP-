#include<iostream>

namespace p1 
{
    int add(int m, int n)
    {
        return m + n;
    }
}
namespace p2
{
    int sub(int m, int n)
    {
        return m - n;
    }
}

int main()
{
    std::cout << "Addition=" << p1::add(10, 5)<<std::endl;
    std::cout << "Subtraction = " << p2::sub(10, 5)<<std::endl;
    return 0;
}
