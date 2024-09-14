#include <stdio.h>
#include <math.h>

//defining PI
#define PI 3.14159

//defining doubles
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double AskForUserInput();

//Calling the functions 
int main(int argc, char **argv) {
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();
  
  return 0;
}
//calculate distance
double calculateDistance() {
    double x1, y1, x2, y2, distance;

    //get user to input numbers for x and ys 
    printf("Enter x1: ");
    x1 = AskForUserInput();
    printf("Enter y1: ");
    y1 = AskForUserInput();
    printf("Enter x2: ");
    x2 = AskForUserInput();
    printf("Enter y2: ");
    y2 = AskForUserInput();

    //distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    

  // print outputs  
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * distance;

//print output of perimeter
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

 //returns how difficult on a scale of 1-5 
    return 4.0; 
}

double calculateArea() {
  //calculate area
    double distance = calculateDistance();
    double area = PI * pow(distance, 2);

    
    printf("The area of the city encompassed by your request is %.2f\n", area);

//returns how difficult on a scale of 1-5 
    return 3.0; // Adjust difficulty level as needed
}

double calculateWidth() {
    double x1, y1, x2, y2;

    //get user to input numbers for x and ys 
    printf("Enter x1: ");
    x1 = AskForUserInput();
    printf("Enter y1: ");
    y1 = AskForUserInput();
    printf("Enter x2: ");
    x2 = AskForUserInput();
    printf("Enter y2: ");
    y2 = AskForUserInput();

    
    double width = fabs(x2 - x1);

  
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
//returns how difficult on a scale of 1-5 
    return 2.0; 
}

double calculateHeight() {
    double x1, y1, x2, y2;

  //get user to input numbers for x and ys 
    printf("Enter x1: ");
    x1 = AskForUserInput();
    printf("Enter y1: ");
    y1 = AskForUserInput();
    printf("Enter x2: ");
    x2 = AskForUserInput();
    printf("Enter y2: ");
    y2 = AskForUserInput();

   
    double height = fabs(y2 - y1);

    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
//returns how difficult on a scale of 1-5 
    return 2.0; 
}

double AskForUserInput() {
    double input;
    scanf("%lf", &input);
    return input;
}

