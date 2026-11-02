#include<stdio.h>
#define size 10
int ht[size];
void initialize()
{
    int i;
    for(i=0;i<size;i++)
    {
        ht[i]=-1;
    }
}
int hashfun(int val)
{
    return val%size;
}
void insert (int val)
{
    int i;
    int index=hashfun(val);
    if(ht[index]==-1)
    {
        ht[index]=val;
    }
    else
    {
        i=(index+1)%size;
        while(i!=index && ht[i]!=-1)
        {
            i=(i+1)%size;
        }
        if(i!=index)
        {
            ht[i]=val;
        }
        else
        {
            printf("array is full\n");
        }
    }
}
    void display()
    {
        int i;
        for(i=0;i<size;i++)
        {
            if(ht[i]!=-1)
            {
                printf("%d\n",ht[i]);
            }
            else
            {
                printf("empty\n");
            }
        }
    }
    void find(int val)
    {
        int i;
        int index=hashfun(val);
        if(ht[index]==val)
        {
            printf("element found at %d\n",index);
        }
        else
        {
            i=(index+1)%size;
            while(i!=index&&ht[i]!=val)
            {
                i=(i+1)%size;
            }
            if(ht[i]==val)
            {
                printf("element found at %d\n",i);
            }
        }
    }
    void main()
    {
        initialize();
        insert(11);
        insert(12);
        insert(13);
        insert(14);
        insert(15);
        insert(16);
        insert(17);
        insert(18);
        insert(19);
        insert(20);
        insert(21);
        insert(22);
        display();
        find(11);
        find(12);
    }

