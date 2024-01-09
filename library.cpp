#include <stdio.h>  
#include <conio.h>    
#include <stdlib.h>    
#include <string.h> 
#include <time.h> 
struct library  
{  
    char book_name[100];    
    char author_name[100];  
    float cost;    
    int no_of_pages;
};  
int main()  
{  
    struct library lib[100]= 
	{
	    {"R.D Sharma","Sharma", 300 , 500},
	    {"War and Peace","Leo Tolstoy",1225,1000},
	    {"A Passage to India","E. M. Forster",1500,750},
	    {"Geetanjali","Rabindranath Tagore",104,2000},
	    {"Cengage","G.Tewani",1500,5000},
	    
	};
    char book_name[100];  
    int i=0,x=0,j=0,count=5;  
	time_t t;   
    time(&t); 
	printf("|--------------------------------------------------------------|\n\n"); 
    printf("|                College Library Management System             |\n\n");
    printf("|--------------------------------------------------------------|\n\n");
    for(i=0;i<5;i++)
    {
        printf(" \nThe name of the book is: %s ", lib[i].book_name);  
        printf(" \nThe name of the author is: %s ", lib[i].author_name);  
        printf(" \nThe number of pages are: %d ", lib[i].no_of_pages);  
        printf(" \nThe cost of the book is: %f \n\n", lib[i].cost);
	}
    printf("-----------------------------------------------------------\n\n\n");
	while(j!=6)  
    {  
        printf("\nSelect one of the following:\n\n");
        printf(" 1. Add Book details.\n");  
        printf(" 2. Display the list of books and its details.\n");  
        printf(" 3. Display the total no. of books in the library.\n");  
        printf(" 4. Removing a book.\n");
        printf(" 5. Exit.\n");    
        scanf(" %d", &j);  
        switch(j)  
        {  
            case 1:  
                system("cls");
                printf(" \nYou can add the details of the book ");  
                printf(" \nEnter the book name: ");
				fflush(stdin);  
                scanf("%[^\n]%*c",lib[i].book_name);  
                printf(" \nEnter the author name: ");  
                scanf(" %[^\n]%*c", lib[i].author_name);  
                printf(" \nEnter the number of pages: ");  
                scanf(" %d", &lib[i].no_of_pages);  
                printf(" \nEnter the cost of the book: ");  
                scanf(" %f", &lib[i].cost);  
                count = count + 1;  
                i = i + 1;  
				printf("you are book is added.\n");
				printf("Thank You.\n");  
				printf("\n\n");
                break;  
            case 2:
            	system("cls");
                if (count==0)  
                {  
                    printf(" \nThere are no books stored!!\n\n ");  
                }  
                else  
				{
                    printf(" \nYou can view the list of books\n ");  
                    printf(" \nThe list of books are:\n "); 
                    for(x=0; x < count; x++)  
                    {  
                    	printf("Book %d details:\n",x);
                        printf(" \nThe name of the book is: %s ", lib[x].book_name);  
                        printf(" \nThe name of the author is: %s ", lib[x].author_name);  
                        printf(" \nThe number of pages are: %d ", lib[x].no_of_pages);  
                        printf(" \nThe cost of the book is: %f ", lib[x].cost); 
						printf("  \nThe login date of book is: %s\n\n",ctime(&t)); 
                }
                }  
                break;  
            case 3: 
			    system("cls");   
                printf(" \nTotal number of books in the library are: %d\n\n ", count);  
                break;
			case 4:
				system("cls");
				int n1;
				printf("Select one of the following to delete:\n");
				 for(i=0; i < count; i++)  
                    {  
                        printf("%d)\n",i);
                        printf(" \nThe name of the book is: %s ", lib[i].book_name);  
                        printf(" \nThe name of the author is: %s ", lib[i].author_name);  
                        printf(" \nThe number of pages are: %d ", lib[i].no_of_pages);  
                        printf(" \nThe cost of the book is: %f\n\n ", lib[i].cost);
						printf("\n-----------------------------------------------------\n"); 
                    }
				scanf("%d",&n1);
				for(i=0;i<count;i++)
				{
					if(i==n1)
					lib[i]=lib[i+1];
				}
				count=count-1;
				printf("Done");  
				break;  
            case 5:  
                exit(0);  
                break;
            default:  
                printf(" \nInvalid number entered\n\n ");  
                break;
		}  
    }
	return 0;   
}
