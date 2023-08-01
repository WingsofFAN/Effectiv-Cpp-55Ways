#include <iostream>

// #define Pi 3.1415926
// const double Pi = 3.1415926;

namespace my_test{

    const double Pi = 3.1415926;
    float caculate_S(float & r )
    {
        // Pi = 3.14;
        return Pi*r*r; 
    }
}


namespace my_test2{

    static const double Pi = 3;
    float caculate_S(float & r )
    {
        return Pi*r*r; 
    }
}

int main()
{

    float r = 3.0;
    std::cout << my_test::caculate_S(r) << std::endl;
    std::cout << my_test2::caculate_S(r) << std::endl;


    return 0;
}
