#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void answer(int x,int *y);
void menu();

int main()
{
	int i=0,j=0;
	long int m;
	menu();
	printf("1. Which crop is sown on the largest area in India?\n1.  Rice\n2.  Wheat\n3.  Sugarcane\n4.  Maize\n");
	answer(i,&j);
	printf("2. Which among the followingis/are correctly paired:\na.Ginger:Tuber\nb.Potato:Rhizome\nc.Onion:Bulb\n1. Only b\n2. Only c\n3. a and c\n4. a, b and c\n");
	answer(++i,&j);
	printf("3. Saffron is obtained from which among the following parts of the plant?\n1. Stigma\n2. Anther\n3. Stamen\n4.leaf\n");
	answer(++i,&j);
	printf("4. The value of Gold is determined in\n1.  Rome \n2.  Washington\n3.  Teheran\n4.  London\n");
	answer(++i,&j);
	printf("5. The state which has the largest number of sugar mills in India is\n1.  Bihar\2.  Haryana\n3.  Punjab\n4.  Uttar Pradesh\n");
	answer(++i,&j);
	printf("6. First University in India was founded at\n1.  Bombay\n2.  Chennai\n3.  Calcutta\n4.  Delhi\n");
	answer(++i,&j);
	printf("7. Tajmahal is on the banks of\n1.  Ganges\n2.  Jamuna\n3.  Tapti\n4.  Cauvery\n");
	answer(++i,&j);
	printf("8. The currency notes are printed in\n1.  New Delhi\n2.  Nasik\n3.  Nagpur\n4.  Bombay\n");
	answer(++i,&j);
	printf("9. The largest ocean in the world is\n1.  The Indian Ocean\n2.  The Antarctic\n3.  The Atlantic Ocean\n4.  The Pacific Ocean\n");
	answer(++i,&j);
	printf("10. Second World war began in\n1.  1931\n2.  1935\n3.  1937\n4.  1938\n");
	answer(++i,&j);
	printf("you won\n");
	printf("enter your paytm no to recieve winning amount\n");
	scanf("%ld",&m);
	printf("you will recieve money in your paytm no %d",m);
	 return 0;
}
void answer(int x,int *y)
{
	int a[10]={1,4,1,4,4,3,2,2,4,4};
	int ans,i=0;
	char lifeline[4],ch5[4]="yes";
	scanf("%d",&ans);
	if(ans==a[x])
	{
		printf("you are right\n");
		if(x!=9)
		printf("move to next question\n");
	}
	else
	{
		printf("you are wrong\n");
			printf("correct answer is %d\n",a[x]);
		if(*y!=1)
		{
		printf("do you want to use lifeline(yes/noo)\n");
		++*y;
	    }
		else 
		{
				printf("you have already used your lifeline\n");
				printf("you loose");
				exit(0);
		}
		fflush(stdin);
	    gets(lifeline);
		if(!strcmp(lifeline,ch5))
		printf("next question\n");
		else
		exit(0);
	}
}
void menu()
{
		char name[20],ch1[20],ch2[20],password[20];
	int i;
		printf("you are going to enter a quiz where you can earn upto one lakh rupee\n");
			printf(".....................................................................\n");
				printf(".....................................................................\n");
	printf("create your new profile\n");
	printf("enter username contaning only character and number\n");
	gets(name);
    printf("enter password in same format\n");
    gets(password);
    	printf("validate your id\n");
        printf("enter username\n");
    	gets(ch1);
	   	while(strcmp(ch1,name))
		{
			 printf("wrong username\n");
		   printf("enter username\n");
		   gets(ch1);
	    }
		 printf("enter password\n");
		 gets(ch2);
         while(strcmp(ch2,password))
    		{
    				printf("wrong password\n");
    			 printf("enter password\n");
		          gets(ch2);
	        }
    	printf("\twelcome to quiz\n");
    	printf("\n...............................\n");
    	printf("\n...............................\n");


}
