/*
 * Project1.c
 *
 *  Created on: 24-May-2022
 *      Author: Ajay Joseph
 */

#include <stdio.h>
#include <stdlib.h>

struct list
{
	int A,B;
	struct list *next;
};

int main()
{
	//int C[10];
	struct list *A1,*A2,*A3,*B1,*B2,*B3;

	{
		A1 = malloc(sizeof(struct list));
		A2 = malloc(sizeof(struct list));
		A3 = malloc(sizeof(struct list));

		A1 ->A = 1;
		A2 ->A = 2;
		A3 ->A = 3;

		A1-> next = A2;
		A2-> next = A3;
		A3-> next = NULL;
	}
//_______________________________________________________
	{
		B1 = malloc(sizeof(struct list));
		B2 = malloc(sizeof(struct list));
		B3 = malloc(sizeof(struct list));

		B1 ->B = 1;
		B2 ->B = 2;
		B3 ->B = 6;

		B1-> next = B2;
		B2-> next = B3;
		B3-> next = NULL;
	}
//________________________________________________________
	//List 1 printing
	printf("___List 1___\n");
	fflush(stdout);
	printf("%d\n",A1->A);
	fflush(stdout);
	printf("%d\n",A2->A);
	fflush(stdout);
	printf("%d\n\n",A3->A);
	fflush(stdout);


	//List 2 printing
	printf("___List 2___\n");
	fflush(stdout);
	printf("%d\n",B1->B);
	fflush(stdout);
	printf("%d\n",B2->B);
	fflush(stdout);
	printf("%d\n\n",B3->B);
	fflush(stdout);

//__________________________________________________
	// Adding link to List 1 and printing
	struct list *A4,*A5;
	A4 = malloc(sizeof(struct list));
	A5 = malloc(sizeof(struct list));

	A4 ->A = 4;
	A5 ->A = 5;

	A1-> next = A2;
	A2-> next = A3;
	A3-> next = A4;
	A4-> next = A5;
	A5-> next = NULL;

	printf("___Adding link to List 1___\n");
	fflush(stdout);
	struct list *temp1 = A1;
	while(temp1!=NULL)
	{
		printf("%d\n",temp1->A);
		fflush(stdout);
		temp1 = temp1->next;
	}

	// Adding link to List 2 and printing
	struct list *B4,*B5;
	B4 = malloc(sizeof(struct list));
	B5 = malloc(sizeof(struct list));

	B4 ->B = 7;
	B5 ->B = 8;

	B1-> next = B2;
	B2-> next = B3;
	B3-> next = B4;
	B4-> next = B5;
	B5-> next = NULL;

	printf("___Adding link to List 2___\n");
	fflush(stdout);
	struct list *temp2 = B1;
	while(temp2!=NULL)
	{
		printf("%d\n",temp2->B);
		fflush(stdout);
		temp2 = temp2->next;
	}

	printf("________Set operation of Union________\n");
	fflush(stdout);
//________________________________________________________
	//Set operation of Union

    if(A1->A == B1->B)
    {
    	printf("%d\n",A1->A);
    	fflush(stdout);
    }
    else
    {
    	printf("%d\n",A1->A);
    	fflush(stdout);
    	printf("%d\n",B1->B);
    	fflush(stdout);
    }
    //_______________________________________
       if(A2->A == B2->B)
       {
    	   printf("%d\n",A2->A);
    	   fflush(stdout);
       }
       else
       {
    	   printf("%d\n",A2->A);
    	   fflush(stdout);
    	   printf("%d\n",B2->B);
    	   fflush(stdout);
       }
//_________________________________________
       if(A3->A == B3->B)
       {
    	   printf("%d\n",A3->A);
    	   fflush(stdout);
       }
       else
       {
    	   printf("%d\n",A3->A);
    	   fflush(stdout);
    	   printf("%d\n",B3->B);
    	   fflush(stdout);
       }
//________________________________________
       if(A4->A == B4->B)
       {
    	   printf("%d\n",A4->A);
    	   fflush(stdout);
       }
       else
       {
    	   printf("%d\n",A4->A);
    	   fflush(stdout);
    	   printf("%d\n",B4->B);
    	   fflush(stdout);
       }
//___________________________________________
       if(A5->A == B5->B)//A5 Check
       {
    	   printf("%d\n",A5->A);
    	   fflush(stdout);
       }
       else				// A5 else check
       {
    	   printf("%d\n",A5->A);
    	   fflush(stdout);
    	   printf("%d\n",B5->B);
    	   fflush(stdout);
       }
   	printf("________Set operation of Intersection________\n");
   	fflush(stdout);
//____________________________________________
    // Set operation of Intersection
    	struct list *temp3 = A1;
    	struct list *temp4 = B1;
    	while(temp3!=NULL && temp4!=NULL)
    	{
    		if(temp3->A == temp4->B)
    		{
    			printf("%d\n",temp3->A);
    			fflush(stdout);
    			temp3 = temp3->next;
    			temp4 = temp4->next;
    		}
    	}
}
