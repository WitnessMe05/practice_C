#include <iostream>

int pow(int base, int exponent)
{
    int result = 1;

    for (int count = 0; count < exponent; ++count)
        result *= base;
        
    return result;
}

int main()
{
    std::cout << pow(2, 4) << std::endl;

    for (int count = 9; count >= 0; count -= 2)//--count)
    {
        std::cout << count << std::endl;
    }

    for (int i=0, j=3; (i+j) < 10; ++i, j+=2)
    {
        std::cout << i << " " << j << std::endl;
    }

    // gugudan
    for (int j=2; j < 10; j++)
    {
        for (int i=1; i < 10; i++)
        {
            std::cout << i * j << " ";
        }
        std::cout << std::endl;
    }
}