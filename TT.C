#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<time.h>
#define Max 50

/* :::::::::  ::::::::   
       ::     ::    ::   
       ::     ::::::::   
    :: ::     ::         
    :::::     ::         
			       Project on BSNL Management System */

void timex(void)
{
	time_t t;
	time(&t);
	printf("\n\n%s", ctime(&t));

}

void getmax()
{
	getch();
	clrscr();
	timex();
	printf("\n");
	printf("---------------------------Welcome----------------------------------\n");
	printf("------------------BHARAT SANCHAR NIGAM LIMITED----------------------\n");
	printf("----------------------Management System-----------------------------\n");
	printf("-Software Developed By:Jaipuneet Singh, Jaswinder Pathania ---------\n");
	printf("\n----------------------------------------------------------------\n\n");

}
void main()
{
	FILE *jp;
	void getmax();
	char name[Max][Max],mob[Max][Max],add[Max][Max],p[Max],p1[Max];
	float bill_amt[Max],usage[Max],q,q1;
	int i,n,m,m1,r,q2;
	m1=1;
	clrscr();
	getmax();
	fflush(stdin);
	printf("\n\nHow Many Customers Detail you want to Enter < 50 :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		printf("\n");
		printf("Enter the Name of the Customer : ",(i+1));
		fflush(stdin);
		gets(name[i]);
		printf("Enter Mobile No. :");
		gets(mob[i]);
		printf("Enter %s",name[i]);
		printf(" Address :");
		gets(add[i]);
		printf("Enter the Monthly Charges. :");
		scanf("%f",&bill_amt[i]);
		printf("Enter the Net Usage in Kilobytes. :");
		scanf("%f",&usage[i]);
	}
do
{

	getmax();
	fflush(stdin);
	printf("\n\n-----------------------------------\n");
	printf("Enter 1 to Search For Records.\n");
	printf("Enter 2 Modify the Records.\n");
	printf("Enter 3 To Display Total Amount.\n");
	printf("Enter 4 To See the Whole Records.\n");
	printf("Enter 5 To Get Printed File of Records.\n");
	printf("Enter 6 To Exit.\n");
	printf("---------------------------------------\n");
	printf("Enter Your Choice: ");
	scanf("%d",&m);
	if(m==2)
	{
		char ch,p1[Max];
		int a1,a2;
		a1=0;
		printf("Do You want to Modify Record Y/N: ");
		scanf("%s",&ch);
		if(ch=='Y'||ch=='y')
		{
			printf(":-)) ");
			printf("Enter the Mobile No. to Search: ");
			fflush(stdin);
			scanf("%s",& p1);
			for(q1=0;q1<n;q1++)
			{
				if(strcmp(p1,mob[q1])==0)
				{
					printf("What Do You Like to Modify \n");
					printf("Enter 1 To Change Name\n");
					printf("Enter 2 To Change Mobile No.\n");
					printf("Enter 3 To Change Address\n");
					printf("Enter your Choice: ");
					scanf("%d",& q2);
					if(q2==1)
					{
						printf("\nEnter New Name :");
						fflush(stdin);
						gets(name[q1]);
						printf("\nNew Name Entered is : ");
						puts(name[q1]);
						break;
					}
					else if(q2==2)
					{
						printf("\nEnter To Change Mobile No. :");
						fflush(stdin);
						gets(mob[q1]);
						printf("\nMobile No. Entered is : ");
						puts(mob[q1]);
						break;
					}
					else if(q2==3)
					{
						printf("\nEnter To Change Address :");
						fflush(stdin);
						gets(add[q1]);
						printf("\nAddress Entered is : ");
						puts(add[q1]);
						break;
					}
				}
				else if(strcmp(p1,mob[a1])!=0)
				{

					printf("\nSorry No Records Found....\n");
					continue;
				}
		}


	}
	}
	if(m==1)
	{
		printf("\n\t---------------------------------\n");
		printf("Enter 1 To Search by Name : \n");
		printf("Enter 2 To Search by Mobile No.: ");
		printf("\nEnter your Choice: ");
		scanf("%d",&r);
		if(r==1)
		{
			printf("Enter the name of the Person to Search First 3 letters Please: ");
			fflush(stdin);
			gets(p);
			for(q=0;q<n;q++)
			{
				if(strncmp(p,name[q],49)==0)
				{
					printf("\n-------------------------------\n");
					printf("Name of the Person is : ");
					puts(name[q]);
					printf("Mobile No. of the Person is: ");
					puts(mob[q]);
					printf("Address of the Person is: " );
					puts(add[q]);
					break;
				}
				else if(strcmp(p,name[q])!=0)
				{
					continue;


				}
			}
		}


	if(r==2)
		{
			printf("Enter the Mobile No. to Search: ");
			fflush(stdin);
			gets(p1);

			for(q1=0;q1<n;q1++)
			{
				if(strcmp(p1,mob[q1])==0)
				{
					printf("\n-------------------------------\n");
					printf("Name of the Person is : ");
					puts(name[q1]);
					printf("Mobile No. of the Person is: ");
					puts(mob[q1]);
					printf("Address of the Person is: " );
					puts(add[q1]);
					break;
				}
				else if(strcmp(p1,mob[q1])!=0)
				{
					continue;

				}
			}


	}
}

	if(m==3)
	{
		int i;
		float month_chg,use,total,tax;
		char p1[Max];
		clrscr();
		getmax();
		printf("Enter the Mobile No. to Search: ");
		scanf("%s",& p1);
		for(i=0;i<n;i++)
		{
			if(strcmp(p1,mob[i])==0)
			{
				fflush(stdin);
				tax=0.1*bill_amt[i];
				month_chg=500;
				use=5*usage[i];
				total=use+month_chg+tax+bill_amt[i];
				printf("\nName :");
				puts(name[i]);
				printf("Mobile No.: ");
				puts(mob[i]);
				printf("\n-----------------------------------------");
				printf("\nBill Amount        :\t%f", bill_amt[i]);
				printf("\nTax                :\t%f",tax );
				printf("\nMonthly Charges    :\t%f",month_chg);
				printf("\nInternet Usage     :\t%f",use);
				printf("\n------------------------------------------\n");
				printf("The Total Amount is  :\t%f",total);
				printf("\n");
				tax=month_chg=use=total=0;

				break;
			}
			else if(strcmp(p1,mob[i])!=0)
			{
				continue;

			}
		}
	}
if(m==4)
{
	clrscr();
	printf("----------DISPLAY OF WHOLE RECORDS----------\n");
	for(q2=0;q2<n;q2++)
	{
		printf("\n--------------------------------------\n");
		printf("Name :");
		puts(name[q2]);
		printf("\n Address :");
		puts(add[q2]);
		printf("\n Mobile No.: ");
		puts(mob[q2]);
		printf("\n Total Bill Amount %f",bill_amt[q2]);
		printf("\n");
	}
}
	if(m==5)
	{
		int i;
		float month_chg,use,total,tax;
		char p1[Max];
		printf("Enter The File Name to Create: ");
		fflush(stdin);
		gets(p1);
		jp=fopen(p1,"w+");
		printf("The File has been Created under the Name: ");
		puts(p1);
		printf("Press Enter To Continue........");
		getch();
		fprintf(jp,"\n");

		fprintf(jp,"---------------------------Welcome--------------------------\n");
		fprintf(jp,"------------------BHARAT SANCHAR NIGAM LIMITED--------------\n");
		fprintf(jp,"------------------Management System-------------------------\n");
		fprintf(jp,"-Software Developed By:Jaipuneet Singh & Jaswinder Pathania -\n");
		fprintf(jp,"\n---------------------------------------------------------\n\n");
		for(i=0;i<n;i++)
		{
			tax=0.1*bill_amt[i];
			month_chg=500;
			use=5*usage[i];
			total=use+month_chg+tax+bill_amt[i];
			fprintf(jp,"\nName \t:\t %s",name[i]);
			fprintf(jp,"\tMobile No.\t:\t %s ",mob[i]);
			fprintf(jp,"\n-----------------------------------------");
			fprintf(jp,"\nBill Amount        :\t%f", bill_amt[i]);
			fprintf(jp,"\nTax                :\t%f",tax);
			fprintf(jp,"\nMonthly Charges    :\t%f",month_chg);
			fprintf(jp,"\nInternet Usage     :\t%f",use);
			fprintf(jp,"\n------------------------------------------\n");
			fprintf(jp,"The Total Amount is  :\t%f",total);
			fprintf(jp,"\n");
		}
		fclose(jp);
	}


	if(m==6)
	{
		fflush(stdin);
		exit(0);
	}
}
	while(m1!=0);


	getch();
}





