#include <stdio.h>

int main()
{
    float radius,area,perimeter;
    printf("enter the  radius of circle\n");
    scanf("%d", &radius);
    area = (22.0/7)*radius*radius;
    printf("Area of circle : %f\n", area);
    perimeter = 2*(22.0/7)*radius ;
    printf("Perimeter of circle: %f\n", perimeter);
    return 0;
}

    



