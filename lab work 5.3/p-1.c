#include<stdio.h>
main(){
	int a,b,c;

	printf("ENTER THE VALUE OF A:- ");
	scanf("%d",&a);
	printf("ENTER THE VALUE OF B:- ");
	scanf("%d",&b);
	printf("ENTER THE VALUE OF C:- ");
	scanf("%d",&c);

	(a>b)   
	
	?((a>c)
	
			?(printf("THE MAXIMUM VALUE IS %d",a))
			      :((printf("THE MAXIMUM VALUE IS %d",c))))
			      
			:((b>c)
				?(printf("THE MAXIMUM VALUE IS %d",b))
					:((printf("THE MAXIMUM VALUE IS %d",c))));

}
