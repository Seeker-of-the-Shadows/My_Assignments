#include<stdio.h>

int main()

{

	int num,i=1;
	printf("Give a number\t");
	scanf("%d",&num);
	printf("The factors of %d are ",num);
	while(i<24)
	{	if(num%i==0)
		printf("%d, ",i);

		i++;
	}
	return 0;

}
