#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
    std::cout << "Creating an empty array" << std::endl;
    Array<int> Test;
    std::cout << "Creating an array with content" << std::endl;
    Array<int> Test2(MAX_VAL);
    std::cout << "Size of test2 : " << Test2.getSize() << std::endl;
    std::cout << "Trying to modify element of the array at index -2" << std::endl;
    try
    {
        Test2[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << "\033[1;31m===========EXCEPTION==============" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cout << "===========EXCEPTION==============\033[m" << std::endl;
    }
    std::cout << "Trying to modify element of the array at max + 1" << std::endl;
    try
    {
        Test2[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << "\033[1;31m===========EXCEPTION==============" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cout << "===========EXCEPTION==============\033[m" << std::endl;
    }
    std::cout << "Changing all values with random values\033[1;34m" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        Test2[i] = rand();
        std::cout << "Test2[" << i << "] : " << Test2[i] << std::endl;
    }
    std::cout << "\033[m";
    std::cout << "Trying to access an unexisting value : " << std::endl;
    try
    {
        std::cout << Test2[2] << std::endl;
        std::cout << Test2[4] << std::endl;
        std::cout << Test2[6] << std::endl;
        std::cout << Test2[12] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "\033[1;31m===========EXCEPTION==============" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cout << "===========EXCEPTION==============\033[m" << std::endl;
    }
    return 0;
}