//
// Created by Hama on 05/01/2021.
//

#ifndef ASSIGNMENT5_GEOMETRIC_H
#define ASSIGNMENT5_GEOMETRIC_H
enum shapes {

    Rectangle,
    Square,
    Circle
};

struct shape {

    double x;
    double y;
    double length1;
    double length2;
    enum shapes type;
};

void display (struct shape s);

int Border (struct shape s);

int Area (struct shape s);
#endif //ASSIGNMENT5_GEOMETRIC_H
