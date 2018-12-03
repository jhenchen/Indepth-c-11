#include <initializer_list>
#include <iostream>
double sum(std::initializer_list<double> il);

int main()
{
    double total = sum({1,2,3,4});
    std::cout << total << std::endl;
}

double sum(std::initializer_list<double> il)
{
    double tot = 0;
    for(auto p = il.begin();p != il.end();++p)
        tot += *p;

    return tot;
}