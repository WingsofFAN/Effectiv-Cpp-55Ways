#include<iostream>

// #define N 10

struct Group
{
//    enum {N = 10};
   static const int N = 10;
   int person_id[N];
};


int main()
{
    Group one_group;

    for(int i = 0 ; i < one_group.N;i++)
    {
        one_group.person_id[i] = one_group.N-i;
    }

    for(int i = 0 ; i < one_group.N;i++)
    {
        std::cout << one_group.person_id[i] << std::endl ;
    }
}