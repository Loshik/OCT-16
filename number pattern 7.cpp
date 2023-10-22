#include<stdio.h>
int main()
{
	int n,i,j,num;
	printf("Enter the value of rows n: ");
	scanf("%d", &n);
	printf("Enter the starting integer value \n");
	scanf("%d", &num);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("%d",num+i);
		printf("\n");
	}
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("%d", 2*n+1-num-i);
		printf("\n");
	}
	return 0;
}
