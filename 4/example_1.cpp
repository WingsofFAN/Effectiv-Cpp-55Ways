#include <iostream>
#include <string>


class Point
{

public:
    int x_;
    int y_;
    Point(){
        printf("Build Null Point \n");
    };  
    Point(const int& x,const int& y):x_(x),y_(y){
        printf("Build Point \n");
    };
    void operator=(const Point& Pts){
        x_ = Pts.x_;
        y_ = Pts.y_;
        printf("Assign Point \n");
    }   
    void print_pts(){printf("(%d , %d )\n",x_,y_);};

};

class  Triangle
{

private:
    Point A_;
    Point B_;
    Point C_;


public:

    Triangle(){
        printf("Build Null Triangle \n");
    };
    // Triangle(const Point& A,const Point& B,const Point& C):A_(A),B_(B),C_(C){
    //     printf("List Build  Triangle \n");
    // };
    Triangle(const Point& A,const Point& B,const Point& C){
        A_ = A;
        B_ = B;
        C_ = C;
        printf("Assign Build Triangle \n");
    };
    int id;
    void print_pts()
    {
        A_.print_pts();
        B_.print_pts();
        C_.print_pts();
        printf(" id : %d \n",id);
    }

};
// int id;

int main()
{
    Triangle T1(Point(1,2),Point(1,5),Point(3,5));
    // Triangle T1;

    T1.print_pts();
    return 0;
}