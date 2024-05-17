#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,x,delta,root1,root2;
	printf(" Enter coefficient a:");
	scanf("%f",&a);
	printf(" Enter coefficient b:");
	scanf("%f",&b);
	printf(" Enter coefficient c:");
	scanf("%f",&c);
	x=-(c*1.0)/b;
	delta=b*b-4*a*c;
	if (a==0) printf ("The equation has one root : %.1f\n", x);
		else
		{
			if (delta>0)
			{
                root1=(-b+sqrt(delta))/2*a;
				root2=(-b-sqrt(delta))/2*a;
				printf("Root 1 is:%.2f\n", root1);
				printf("Root 2 is:%.2f\n", root2);
			}
			else if(delta <0 || delta==0)
			{
				if (delta==0)
				{
				    root1=root2= -b/2*a;
                    printf("Root 1 is:%.2f\n", root1);
                    printf("Root 2 is:%.2f\n", root2);
				}
				else
				{
					printf("The equation have no root");
				}
			}
		}
	return 0;
}