#include <stdio.h>
int main(){
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter radius of your circle: \n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Area: %lf\n", area);
    printf("Circumference: %lf", circumference);

    return 0;
}