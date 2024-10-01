#include <iostream>
#include <cstdlib> // has EXIT_SUCCESS

int main()
{
    std::cout<< "hello world \n"; // better not to copy all of stdlib and just use std:: and \n instead of endl since performance is better
    return EXIT_SUCCESS; // EXIT_SUCCESS makes it clearer instead of using 0

}