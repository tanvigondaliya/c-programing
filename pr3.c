#include<stdio.h>
int main(void)
{
    //given dimension//
    double length = 70.0;
    double breadth =90.0;

        double area=length*breadth;
        double perimeter=2*(length*breadth);



    printf("rectengular park dimensions\n");
    printf("length;%.2f\n", length);
    printf("breadth:%.2f\n", breadth);
    printf("area:%.2f\n", area);
    printf("perimeter:%.2f\n", perimeter);
    return 0;
}
