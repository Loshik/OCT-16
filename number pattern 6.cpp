#include<stdio.h>
int main()
{
	int n,i,j,num=1;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("%d",num++);
		printf("\n");
	}
	return 0;
}
