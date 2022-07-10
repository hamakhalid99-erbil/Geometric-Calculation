#include <stdio.h>
#include <stdlib.h>
#include "Geometric.h"







int main()
{
    struct shape rectangle01;

    rectangle01.x = 2;
    rectangle01.y = 2;
    rectangle01.length1 = 4;
    rectangle01.length2 = 8;
    rectangle01.type = Rectangle;

    display(rectangle01);
    printf("the parameter of the shape is: %d\n", Border(rectangle01));
    printf("the area of the shape is: %d\n", Area(rectangle01));


    struct shape square01;

    square01.x = 2;
    square01.y = 2;
    square01.length1 = 4;
    square01.type = Square;

    display(square01);
    printf("the parameter of the shape is: %d\n", Border(square01));
    printf("the area of the shape is: %d\n", Area(square01));


    struct shape circle01;

    circle01.x = 2;
    circle01.y = 2;
    circle01.length1 = 4;
    circle01.type = Circle;

    display(circle01);
    printf("the parameter of the shape is: %d\n", Border(circle01));
    printf("the area of the shape is: %d\n", Area(circle01));




    return 0;
}
