#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
#include<string.h>

struct customer_details
{
	char name[30],nationality[20],email[40],ariv_date[11],dept_date[11];
	int age,phone_num;
}cust_details;


int main()
{

	int pin;
	printf("<================================> WELCOME TO HOTEL MANAGEMENT SYSTEM <================================>\n");
	printf("ENTER THE PIN TO CONTINUE:");
	scanf("%d",&pin);
	
	switch (pin)
	{
		case 2929:		
			printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@ WELCOME ADMIN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
			printf("\n");
			printf("**************************** ##  MAIN MENU  ## ***************************\n");
			printf("**************************************************************************\n");
			printf("**\t\t\t\t\t\t\t\t\t**\n");
			printf("**\t\t\t1 - Book a Room\t\t\t\t\t**\n");
			printf("**\t\t\t2 - View Customer Details\t\t\t**\n");
			printf("**\t\t\t3 - Update Customer Details\t\t\t**\n");
			printf("**\t\t\t4 - Delete Customer Details\t\t\t**\n");
			printf("**\t\t\t5 - Exit the HMS\t\t\t\t**\n");
			printf("**\t\t\t\t\t\t\t\t\t**\n");
			printf("**************************************************************************\n");
			printf("**************************************************************************\n");
			
			int choice;
			printf("COMMAND: ---> ");
			scanf("%d",&choice);
			switch (choice)
			{
				case 1:
					printf("Yup Booking.....\n");//yaha booking function aaega
					break;
				case 2:
					printf("Yup Viewing....\n");//yaha viewing function aaega
					break;
				case 3:
					printf("Yup Updating....\n");//yaha updated value function aaega
					break;
				case 4:
					printf("Yup Deleting....\n");// yaha deleted value function aaega
					break;
				case 5:
					printf("Yup Exiting....\n");// yaha exit function aaega
					break;
				default:
					printf("Please Enter the correct option\n");
					break;
			}
			break;

	default:
		printf("Wrong PIN Entered");
		break;
	}	
	
	
	return 0;
}


// switch (expression)
// {
// case /* constant-expression */:
// 	/* code */
// 	break;

// default:
// 	break;
// }