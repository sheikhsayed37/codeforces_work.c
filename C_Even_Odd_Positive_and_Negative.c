#include <stdio.h>
int main()
{
 int n,x,i;
 int pos=0,neg=0,even=0,odd=0;
 scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&x);
    if(x%2==0)
    {
        even++;

    }
    else
    {
        odd++;

    }
    if(x>0)
    {
        pos++;

    }
    else if(x<0)
    {
        neg++;

    }
    
}
printf("Even: %d\n",even);
     printf("Odd: %d\n",odd);
      printf("Positive: %d\n",pos);
 printf("Negative: %d\n",neg);
}