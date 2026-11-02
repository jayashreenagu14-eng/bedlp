#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2,r,i;
    printf("enter a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("roots are real and different\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("roots=%f,-%f",r1,r2);
    }
    else if(d==0)
    {
        printf("roots are real and equal\n");
        r=b/(2*a);
        printf("roots=%f,%f",r,r);
    }
    else
    {
        printf("roots are imaginary\n");
        r=-b/(2*a);
        i=sqrt(-d)/(2*a);
        printf("roots=%f+%fi,%f-%fi",r,i,r,i);
    }
    return 0;
}


