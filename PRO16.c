#include<stdio.h>
struct student
{
    char name[20];
    int age;
    float per;
};
void main()
{
    struct student s[10];
    int i,n;
    printf("enter number of student\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter student information\n");
        printf("enter name\n");
        scanf("%s",&s[i].name);
        printf("enter age\n");
        scanf("%d",&s[i].age);
        printf("enter percentage\n");
        scanf("%f",&s[i].per);
    }
    printf("student information");
    for(i=0;i<n;i++)
    {
    printf("name=%s\n",s[i].name);
    printf("age=%d\n",s[i].age);
    printf("percentage=%f\n",s[i].per);
    }
}
