#include<stdio.h>
#include <stdlib.h>
int main()
{
	int choice;
	do{
		printf("1.Binary to Decimal\n");
		printf("2.Decimal to Binary\n");
		printf("3.Multiplication Table\n");
		printf("4.Counting Digits\n");
		printf("5.Reverse an Integer\n");
		printf("6.Exit\n");
		printf("Enter (1 to 6) to choose a module: ");
		scanf("%d", &choice);
	} while (choice>6 || choice<=0);
	
	switch (choice)
	{
		case 1: {
			int binary, decimal=0, i=1, rem;
			do {
				printf("Enter a binary:");
				scanf("%d", &binary);
				while (binary!=0)
				{	
					rem = binary % 10; /* chia lay phan so thap phan*/
					if (rem<0|| rem>1){
					break;
					}
					decimal = decimal + rem * i;
					binary=binary/10; /* chia lay phan nguyeni*/
					i=i*2;		
				}
			}while (rem>1||rem<0);
			printf("The decimal number is %d", decimal);
			break;
		}
		case 2:{
			int binary[10], decimal,i;
			printf("Enter a decimal number:");
			scanf("%d",&decimal);
			for (i=0; decimal > 0; i++) /* i++ la tra lai gia tri cua i truoc khi tang len 1*/
			{
				binary[i]=decimal%2;
				decimal=decimal /2;
			} 
			printf("The binary number is ");
			for (i=i-1; i >=0;i--)
			{
				printf("%d",binary[i]);
			}
			break;
		}
		case 3:{
			int number, i;
			printf("You choose to Create a Multiplication Table from 1 to 9 \n");
			printf("Enter an number: ");
			scanf("%d",&number);
			for (i=1;i<=10;++i) /*tang gia tri cua so len 1*/
			{
				printf("%d * %d = %d \n", number, i, number*i);
			}
			break;
		}
		case 4:{
			int n,i=0;
			printf("Enter number you want to count digits:");
			scanf("%d", &n);
			while (n>=1) {
				n=n/10;
				i=i+1;
			}
			printf("There are %d digits", i);
			break;
		}
		case 5: {
			int n,i,reverse=0;
			printf("Enter number you want to reverse:");
			scanf("%d",&n);
			while (n>0) {
				/* vd: n=1234; reverse= 0 ; loop1: reverse= 0 + 4; loop 2: reverse = 40 + 3 = 43 */
				reverse=reverse*10+n%10;
				n=n/10;
			}
			printf("The reverse is %d", reverse);
			break;
		}
		case 6:
			exit(1);
		
	}
}

