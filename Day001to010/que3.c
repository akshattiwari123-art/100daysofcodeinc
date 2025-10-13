#include <stdio.h>


int main()
{
    int l,b, area ,perimeter;
    printf("Enter the length\n");
    scanf("%d",&l);
    printf("Enter the breadth\n");
    scanf("%d",&b);
    area = l*b;
    printf("Area of rectangle: %d\n", area);
    perimeter = 2*(l+b);
    printf("Perimeter of rectangle:%d\n",perimeter);
}