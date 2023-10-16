#include<stdio.h>
int main()
{
	int n,i,m,k;
	printf("enter the value of n \n");
	scanf("%d",&n);
	int a[n];
	printf("enter the numbers of array \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		m=a[0];
		if(a[i] < m)
		{
		k=a[i];
		printf("minimum element in the array is %d",k);
		}
		else
		printf("the minimum element is m");
    return 0;
}
