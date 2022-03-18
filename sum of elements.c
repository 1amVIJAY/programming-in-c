#include<stdio.h>
void create();
int main()
{
    create();
}
void create()
{
    int arr[20],n,i=0,sum=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    while(i<=n-1)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        i++;
    }
    printf("sum of  elements=%d",sum);
}