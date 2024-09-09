//************************************************* 
// Assignment1.c
// Author: Joshua Laird
// Date: 9/08/2024
// Class: COP 3223, Professor Parra
// Purpose: This program takes the given x and y coordinates
// of a circle and calculates the distance between the two
// points as well as the perimeter, area, width, and height.
// It then displays all of this data in a uniform way.
// Input: none
//
// Output: The data that the user gave.
//**************************************************

#include <stdio.h>
#include <math.h>

//This function allows me to call the coordinates that are used
//for every calculation.
double coordinates()
{
    double x1 = 9;
    double x2 = 2;
    double y1 = 3;
    double y2 = 7;

    printf("X1 = %.1f; Y1 = %.1f\n", x1,y1);
    printf("X2 = %.1f; Y2 = %.1f\n", x2,y2);
    return 0;
}

//This function calculates the distance between the two points
//giving us the radius.
double calculateDistance()
{
    coordinates();
    double x1 = 9;
    double x2 = 2;
    double y1 = 3;
    double y2 = 7;
    
    double distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    printf("The distance between the two points is: %.1f\n", distance);
    return distance;
}

//This function calculates the perimeter of the circle.
double calculatePerimeter(double distance)
{
    coordinates();
    double perimeter = 2 * M_PI * distance;
    printf("The perimeter of the city encompassed by your request is: %.1f\n", perimeter);
    return perimeter;
}

//This function calculates the area of the circle.
double calculateArea(double distance)
{
    coordinates();
    double area = M_PI * pow(distance,2);
    printf("The area of teh city encompassed by your request is %.1f\n", area);
    return area;
}

//This function calculates the width of the cirlce.
double calculateWidth(double distance)
{
    coordinates();
    double width = distance *2;
    printf("The width of the city encompassed by your request is : %.1f\n", width);
    return width;
}

//This function gives us the height of the circle but since it is in the second demension
//this is acutally the radius as well.
double calculateHeight(double distance)
{
    coordinates();
    double height = distance;
    printf("The height of the city encompassed by your request is %.1f\n", height);
    return height;
}

//This calls all of the functions that are used and gives the user the data.
int main(int argc, char **argv)
{
    double distance = calculateDistance();
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(distance);
    calculateHeight(distance);
    return 0;
}