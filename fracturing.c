#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
void printPointInfo(double x1, double y1, double x2, double y2);

// Main function
int main(int argc, char **argv) {
    // Call functions to perform calculations and display results
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0; 
}

// Function to get user input for coordinates
double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}

// Function to print coordinates
void printPointInfo(double x1, double y1, double x2, double y2) {
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
}

// Function to calculate distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;

    printf("Enter the coordinates for point 1:\n");
    x1 = askForUserInput();
    y1 = askForUserInput();

    printf("Enter the coordinates for point 2:\n");
    x2 = askForUserInput();
    y2 = askForUserInput();

    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printPointInfo(x1, y1, x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Function to calculate the perimeter (circumference) of the circle
double calculatePerimeter() {
    double distance = calculateDistance();
    double radius = distance / 2.0;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 1;  
}

// Function to calculate the area of the circle
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2.0;
    double area = PI * radius * radius;

    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 1; 
}

// Function to calculate the width of the circle
double calculateWidth() {
    double distance = calculateDistance();
    printf("The width of the city encompassed by your request is %.2f\n", distance);

    return 1;
}

// Function to calculate the height of the circle
double calculateHeight() {
    double distance = calculateDistance();
    printf("The height of the city encompassed by your request is %.2f\n", distance);

    return 1; 
}