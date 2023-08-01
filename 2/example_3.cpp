#include <iostream>


#define SQUARE_DEFINE(x) ((x) * (x))  // Can lead to unexpected behavior due to textual substitution

template<typename T>
inline T square_inline(T x) { return x * x; }  // Safe to use, with type checking


int main()
{
    int l1 = 2 ,l2 = 2;
    int s1 = SQUARE_DEFINE(l1++);
    std::cout << "s1:" << s1 <<std::endl;
    int s2 = square_inline(l2++);
    std::cout << "s2:" << s2 <<std::endl;

    // int l1 = 2 ,l2 = 2;
    // int s1 = SQUARE_DEFINE(++l1);
    // std::cout << "s1:" << s1 <<std::endl;
    // int s2 = square_inline(++l2);
    // std::cout << "s2:" << s2 <<std::endl;


    return 0;
}