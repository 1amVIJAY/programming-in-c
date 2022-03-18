#include<stdio.h>
void create();
int main()
{
    create();
}
void create()
{
    int arr[20],n,i=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    while(i<=n-1)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    printf("Array elements\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
