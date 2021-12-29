#include<stdio.h>
int main()
{
        int n,i,sum=0,temp;
        printf("Enter a number:");
        scanf("%d",&n);
        temp=n;
        while(n>0)
        {
          i=n%10;
          sum=sum*10+i;
          n=n/10;
        }
        printf("\nReverse of %d is %d",temp,sum);
        return 0;
}
