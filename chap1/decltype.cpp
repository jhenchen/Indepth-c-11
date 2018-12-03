
#include <iostream>
int main()
{
    int i =0 ;
    decltype(i) y;
    y = 10;

    std::cout << y <<std::endl;
    return 0;
}