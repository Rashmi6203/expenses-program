#include<stdio.h>
int main()
{
	int quantity,discount;
	float rate,tot;
	
	printf("Enter the Quantity: \n");
	scanf("%d",&quantity);
	printf("Enter the Rate: \n");
	scanf("%f",&rate);
	if ( quantity>1000)
	{
		discount=10;
	    tot = (quantity*rate)-(quantity*rate*discount/100);
     	printf(" Total expenses=Rs.%f\n",tot);
    } 
	return 0;
}
