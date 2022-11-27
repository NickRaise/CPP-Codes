#include <stdio.h>
#include <stdlib.h>

// Structure Decleration
struct node {
  int info;
  struct node *link;         //Pointer part
};

struct node *first1, *first2;         // Pointer to the SLL

// Displaying SLL
void SLL_Display(struct node *ptr)
{
  printf("\nThe data in the SLL is:- \n");
  while(ptr!=NULL)
  {
    printf("%d\t",ptr->info);
    ptr=ptr->link;         //moving ptr pointer to right
  }
  printf("\n");
}

// Creation of first SLL
void SLL_Creation_1() 
{
  int n;
  struct node *ptr, *cpt;
  printf("\nThis is SLL 1:-\n");
  printf("Enter the number of nodes you want to create : ");
  scanf("%d", &n);
  ptr = (struct node *)malloc(sizeof(struct node));
  printf("Entetr the data : ");
  scanf("%d", &ptr->info);
  cpt = ptr;
  first1 = ptr;
  for (int i = 2; i <= n; i++) 
  {
    cpt = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Entetr the data : ");
    scanf("%d", &ptr->info);
    cpt->link = ptr;         //moving cpt pointer to right
  }
  ptr->link = NULL;         //initialising the link part of last node
  SLL_Display(first1);
}

// Creation of second SLL
void SLL_Creation_2() 
{
  int n;
  struct node *ptr, *cpt;
  printf("\nThis is SLL 2:-\n");
  printf("Enter the number of nodes you want to create : ");
  scanf("%d", &n);
  ptr = (struct node *)malloc(sizeof(struct node));
  printf("Entetr the data : ");
  scanf("%d", &ptr->info);
  cpt = ptr;
  first2 = ptr;
  for (int i = 2; i <= n; i++) 
  {
    cpt = ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d", &ptr->info);
    cpt->link = ptr;         //moving cpt pointer to right
  }
  ptr->link = NULL;         //initialising the link part of last node
  SLL_Display(first2);
}

// Insertion at the beginning of first SLL
void SLL_Insert_Beg()
{
  struct node *ptr;
  ptr = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data to be added at beginning of first SLL : ");
  scanf("%d",&ptr->info);
  ptr->link=first1;
  first1=ptr;
  SLL_Display(first1);
}

// Deletion at the beginning of the first SLL
void SLL_Del_Beg()
{
  struct node *ptr;
  ptr=first1;
  first1=first1->link;
  printf("\n%d is deleted.\n",ptr->info);
  free(ptr);         //Deleting the node
}

// Insertion at the end of first SLL
void SLL_Insert_End()
{
  struct node *ptr, *cpt;
  cpt=first1;
  ptr = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data to be added at end of first SLL : ");
  scanf("%d",&ptr->info);
  ptr->link=NULL;
  while(cpt->link!=NULL)
  {
    cpt=cpt->link;         //moving cpt pointer to right
  }
  cpt->link=ptr;
  SLL_Display(first1);
}

// Deletion at the end of the first SLL
void SLL_Del_End()
{
  struct node *ptr, *cpt;
  ptr=cpt=first1;
  while(ptr->link!=NULL)
    {
      cpt=ptr;
      ptr=ptr->link;         //moving ptr pointer to right
    }
  cpt->link=NULL;
  printf("\n%d is deleted.\n",ptr->info);
  free(ptr);         //Deleting the node
  SLL_Display(first1);
}

void SLL_Insert_AftData()         //Function to add a node after a given data
{
  struct node *ptr,*cpt;
  int data;
  cpt=first1;
  ptr = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data after which you want to add the node : ");
  scanf("%d",&data);
  printf("Enter the data to be added : ");
  scanf("%d",&ptr->info);
  while(cpt->info!=data)
    {
      cpt=cpt->link;
    }
  ptr->link=cpt->link;
  cpt->link=ptr;
  SLL_Display(first1);
}

void SLL_Del_AtData()         //Function to Delete a node at a given data
{
  struct node *ptr, *cpt;
  int data;
  ptr=cpt=first1;
  printf("\nEnter the data at which you want to delete the node : ");
  scanf("%d",&data);
  while(ptr->info!=data)
  {
    cpt=ptr;
    ptr=ptr->link;
  }
  cpt->link=ptr->link;
  printf("%d is deleted",ptr->info);
  free(ptr);
  SLL_Display(first1);
}

void SLL_Concatenate()         //Joining the two SLL
{
  struct node *ptr;
  ptr=first1;
  while(ptr->link!=NULL)
    {
      ptr=ptr->link;
    }
  ptr->link=first2;
  ptr=first1;
  printf("\nConcatenation Completed!");
  SLL_Display(first1);
}

int main(void) 
{ 
  SLL_Creation_1();
  SLL_Insert_Beg();
  SLL_Insert_End();
  SLL_Del_Beg();
  SLL_Del_End();
  SLL_Insert_AftData();
  SLL_Del_AtData();
  SLL_Creation_2();
  SLL_Concatenate();
  
  
  
  return 0; 
}