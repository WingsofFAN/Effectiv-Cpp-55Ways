#include <iostream>


int main()
{
    // char greeting[] = "Hello";
    // char* p1 = greeting;                 // non-const pointer, non-const data
    // const char* p2 = greeting;           // non-const pointer,const data
    char const* p2_ = greeting;  
    // char* const p3 = greeting;           // const pointer,non-const data
    // const char* const p4 = greeting;     // const pointer,const data

    // p1[0] = 'R'; 
    // p2[1] = 'o';
    // p3[2] = 't';
    // p4[3] = 't';

    //

    const int a  = 10;
    int b = a;

    const int* const p = new int(10);
    int* p1 = p;
    int* const p2 = p;
    const int* p3 = p;
    int *p4 = &a;
    const int* p5 = &a;

    //当执行对象拷贝操作时，常量的顶层const不受影响，但是底层const必须一致
  

    // const int &r1 = 20;
    // int &r2 = a;
    // int &r3 = r1;


    return 0;
}
