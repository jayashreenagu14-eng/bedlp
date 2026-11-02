# include<stdio.h>
void main()
{
    int A[10],n,i,j,k;
    printf("enter the size of an array\n");
    scanf("%,&n");
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",& A[i]);
    }
    printf("elements before removal of duplicate elemens");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
        for(i=o;i<n;i++)
        {
            for(J=i+1;J<n;J++)
            {
                if(A[i]==A[J])
                    for(k=J;k<n-1;k++)
                {
                    A[k]A[K+1];
                }

                n--;
                J--;
                }
            }
        }
        printf("elementsafter removal of duplicate elements");
        For(i=0,i<n;i++)
        {
            printf("%d\n",A[i]);
        }
}












































































































































            ]
        }


    }
