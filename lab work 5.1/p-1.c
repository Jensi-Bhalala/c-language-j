#include<stdio.h>
main()
{
	int a , b;
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	if(a<b){
		printf("the minimum value is %d",a);
	}
	else{
		printf("the minimum value is %d",b);
	}
}
