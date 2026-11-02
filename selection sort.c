#include<stdio.h>
int main()
{
int arr[]={75,8,1,16,48,3,7,0};
int n=8;
int i,j,max,temp;
for (i=0;i<n-1;i++)
{
    max=i;
    for(j=i+1;j<n;j++)
    {
        if(arr[j]>arr[max])
        {
            max=j;
        }
    }
    temp=arr[i];
    arr[i]=arr[max];
    arr[max]=temp;
}
printf("sorted array in descending order(selection sort):\n");
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;
}
