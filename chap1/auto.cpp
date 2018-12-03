

#include <iostream>

#include <vector>

int main()
{
    auto i = 10;
    auto d = 10.0;
    auto s = 's';

    std::vector<int> array;
    for(int i = 0;i < 10; ++i)
        array.push_back(i);
    
    for(auto it = array.begin();it != array.end();++it)
        std::cout << *it << std::endl;

    std::cout<<i<<std::endl<<d<<std::endl;

    return 0;
}