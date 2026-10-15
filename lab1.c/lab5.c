// The length & breadth of a rectangle and radius of a circle are input through the keyboard.
//  Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle. 

#include<stdio.h>
int main()

{
    float length, breadth, radius;
    float area_rectangle, perimeter_rectangle;
    float area_circle, circumference_circle;

    // Input for rectangle
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    area_rectangle = length * breadth;
    perimeter_rectangle = 2 * (length + breadth);

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area_circle = 3.14 * radius * radius;
    circumference_circle = 2 * 3.14 * radius;

    printf("Area of Rectangle: %.2f\n", area_rectangle);
    printf("Perimeter of Rectangle: %.2f\n", perimeter_rectangle);
    printf("Area of Circle: %.2f\n", area_circle);
    printf("Circumference of Circle: %.2f\n", circumference_circle);

    return 0;
}