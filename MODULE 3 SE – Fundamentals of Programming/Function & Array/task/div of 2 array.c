#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter size of arrays: ");
	scanf("%d",&n);
	int arr1[n],arr2[n],sum_arr[n];
	printf("\n-------ENTER VALUES OF ARRAY 1-------\n");
	for(i=0;i<n;i++){
		printf("\nEnter value of index %d : ",i);
		scanf("%d",&arr1[i]);
	}
	printf("\n-------ENTER VALUES OF ARRAY 2-------\n");
		for(i=0;i<n;i++){
		printf("\nEnter value of index %d : ",i);
		scanf("%d",&arr2[i]);
	}
		for(i=0;i<n;i++){
		sum_arr[i]=arr1[i]/arr2[i];
	}
	printf("\n-------VALUES OF DIVISION ARRAY-------\n");
		for(i=0;i<n;i++){
		printf("\nValue of index %d is %d",i,sum_arr[i]);
	}
	return 0;
}
