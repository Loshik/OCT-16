#include<stdio.h>
int main()
{
	int n,i,m;
	printf("enter the value of n \n");
	scanf("%d",&n);
	int a[n];
	printf("enter the numbers of array \n");
	m=a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i] < m)
		{
		m=a[i];
		}
	}
		printf("minimum element in the array is %d",m);
    return 0;
}
