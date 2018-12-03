
#include <vector>
#include <iostream>
int main()
{
    std::vector<int> array = {1,2,3,4,5};

    for(auto it = array.begin();it != array.end(); ++it)
        std::cout << *it << std::endl;

       

    for(auto n : array)
        std::cout << "range for :" << n << std::endl; 
        
        return 0;
}