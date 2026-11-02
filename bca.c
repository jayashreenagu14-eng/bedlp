#include<stdio.h>
void main()
{
    float r,area,cir;
    printf("enter radius\n");
    scanf("%f",&r);
    area=3.14*r*r;
    cir=3.14*2*r;
    printf("area of a circle=%f",area);
    printf("circumference of a circle=%f",cir);
}
