#include<stdio.h>
union student
{
    char name[20];
    int age;
    float per;
};
void main()
{
    union student s1;
    printf("enter student name:");
    scanf("%s",&s1.name);
    printf("enter age:");
    scanf("%d",&s1.age);
    printf("enter percentage:");
    scanf("%f",&s1.per);
    printf("student information\n");
    printf("name=%s\n",s1.name);
    printf("age=%d\n",s1.age);
    printf("per=%f\n",s1.per);
    printf("size of student union=%zu",sizeof(union student));
}
