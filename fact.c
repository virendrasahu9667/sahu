# include <stdio.h>

int main (){

int n , nc2;
printf("enter n :");
scanf("%d",&n);
for (int i = 2; i <= n; i++)
{
nc2 = (n*(n-1))/2;
printf("%d\n",nc2);
}
return 0 ;
}