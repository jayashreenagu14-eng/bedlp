#include<stdio.h>
void main()
{
    float rad,area,cir;
    printf ("enter a radies\n");
    scanf ("%f",&rad);
    area=3.141*rad*rad;
    cir=2*3.141*rad;
    printf ("area of a circle is %f\n",area);
    printf ("circumference of a circle is % f/n",cir);
}
