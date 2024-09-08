#include <stdio.h>
#include <math.h>

double coordaintes()
{
    double x1 = 9;
    double x2 = 2;
    double y1 = 3;
    double y2 = 7;

    printf("X1 = %.1f; Y1 = %.1f\n", x1,y1);
    printf("X2 = %.1f; Y2 = %.1f\n", x2,y2)
}

double calculateDistance()
{
    coordaintes();
    double x1 = 9;
    double x2 = 2;
    double y1 = 3;
    double y2 = 7;
    
    double distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    printf("The distance between the two points is: %.1f\n", distance);
    return distance;
}

double calculatePerimeter(double distance)
{
    coordaintes();
    double perimeter = 2 * M_PI * distance;
    printf("The perimeter of the city encompassed by your request is: %.1f\n", perimeter);
    return perimeter
}
