#include<stdio.h>
int tanzil(int x)
{
return 5*x;
}
int gebjam(int x)
{
return 5*x;
}
int main()
{
int x;
scanf("%d",&x);
 for(int i=0;i<=x;i++)
{
 for (int j=1;j<=i;j++)
{
printf("*");
}
printf(" \n");
}
 for(int i=0;i<=x;i++)
{
 for (int j=i;j>=1;j--)
{
printf("*");
}
printf(" \n");
}

return 0;
}
int palindrome(int x)
{
int pal=0;
int temp;
int temp=x;
while (temp!=0)
{
temp=x%10;
pal = pal*10+x;
temp= temp/10;
}



