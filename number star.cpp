#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("%d",i+1);
		for(j=0;j<i;j++)
		{
		printf("*%d",i+1);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		printf("%d",n-i);
		for(j=0;j<n-i-1;j++)
		{
		printf("*%d",n-i );
		}
		printf("\n");
	}
	return 0;
}
