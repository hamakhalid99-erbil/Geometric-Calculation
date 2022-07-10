//
// Created by Hama on 07/01/2021.
//

#include "Geometric.h"
#include <stdio.h>
#include <stdlib.h>





void display(struct shape s){

    printf("\nthe coordinates of the shape: (%lf, %lf)\n", s.x, s.y);

    switch(s.type) {

        case Rectangle:
            printf("the shape is a Rectangle\nthe width and hight are: %lf x %lf\n", s.length1, s.length2);
            break;
        case Square:
            printf("the shape is a Square\nthe length is: %lf\n", s.length1);
            break;
        case Circle:
            printf("the shape is a Circle\nthe radius is: %lf\n", s.length1);
            break;
        default:
            printf("the shape is undefined\n");
            break;
    }
}

int Border (struct shape s) {


    switch(s.type) {

        case Rectangle:
            return 2*(s.length1 + s.length2);
            break;
        case Square:
            return 4*s.length1;
            break;
        case Circle:
            return 2 * 3.14 * s.length1;
            break;
        default:
            return 0;
            break;
    }

}

int Area (struct shape s) {

    switch(s.type) {

        case Rectangle:
            return s.length1 * s.length2;
            break;
        case Square:
            return s.length1 * s.length1;
            break;
        case Circle:
            return 3.14 * (s.length1 * s.length1);
            break;
        default:
            return 0;
            break;
    }

}
