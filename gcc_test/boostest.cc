#include <iostream>
#include "boost/lexical_cast.hpp"
#include <string>

int main()
{
    const char* s = "100";
    int a=boost::lexical_cast<int>(s);
    int b=1;
    std::cout<<(a+b)<<std::endl;
    return 0;

}
