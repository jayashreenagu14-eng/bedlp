# include<stdio.h>
void swap(int *x,int *y)
{
    int temp;

    temp-*x;
    *x-*y;
    *y=temp;
}

int main()
{

    int a,b;

    printf("Enter two numbers:");
    scanf("%d%d,&a,&b");
    //before swapping

    printf("\n Before swapping:");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    //functional call

    swap(&a,&b);
    //after swapping

    printf("\n\nAfter swapping:");
    printf("\na-%d",a);
    printf("\nb-%d",b);

    return 0;
}
