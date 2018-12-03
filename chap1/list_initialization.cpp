#include <iostream>

int i_arr[3] = {1,2,3};
long l_arr[4] = {1,2,3,4};
struct A{
    int x;
    int y;
};
A a = {1,2};

int a4 = {3};
int a5 = {5};
int a6(6);

int x[] = {1,2,3};
float y[4][2] = 
{
    {1,3},
    {2,3},
    {3,1},
    {4,3}
};


int main()
{
    std::cout << a5 << std::endl;
    std::cout << a6 << std::endl;
    return 0;
}
