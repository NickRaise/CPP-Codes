#include <stdio.h>
#include <stdlib.h>

struct node
{
  int info;
  struct node *link;
};
struct node *first;

void CLL_Display()
{
  struct node *ptr;
  ptr=first;
  printf("\n");
  while(ptr->link!=first)
    {
      printf("%d\t",ptr->info);
      ptr=ptr->link;
    }
  printf("%d\t",ptr->info);
}

void CLL_Creation()
{
  int n;
  struct node *ptr,*cpt;
  printf("\nEnter how many node you want to enter : ");
  scanf("%d",&n);
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("Enter the info : ");
  scanf("%d",&ptr->info);
  first=cpt=ptr;
  for(int i=2;i<=n;i++)
    {
      ptr=(struct node*)malloc(sizeof(struct node));
      printf("Enter the info : ");
      scanf("%d",&ptr->info);
      cpt->link=ptr;
      cpt=ptr;
    }
  ptr->link=first;
  CLL_Display();
}

void CLL_Insertion_Beg()
{
  struct node *ptr,*cpt;
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("\n\nEnter the data you want to add at the beginning : ");
  scanf("%d",&ptr->info);
  cpt=first;
  ptr->link=first;
  while(cpt->link!=first)
    {
      cpt=cpt->link;
    }
  cpt->link=ptr;
  first=ptr;
  CLL_Display(); 
}

void CLL_Insertion_End()
{
  struct node *ptr,*cpt;
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("\n\nEnter the data you want to add at the end : ");
  scanf("%d",&ptr->info);
  cpt=first;
  ptr->link=first;
  while(cpt->link!=first)
    cpt=cpt->link;
  cpt->link=ptr;
  CLL_Display();
}

void CLL_Delete_Beg()
{
  struct node *ptr;
  ptr=first;
  while(ptr->link!=first)
    ptr=ptr->link;
  ptr->link=first->link;
  ptr=first;
  first=first->link;
  printf("\n\n%d is deleted.\n",ptr->info);
  free(ptr);
  CLL_Display();
}

void CLL_Delete_End()
{
  struct node *ptr,*cpt;
  cpt=ptr=first;
  while(ptr->link!=first)
    {
      cpt=ptr;
      ptr=ptr->link;
    }
  cpt->link=first;
  printf("\n\n%d is deleted.\n",ptr->info);
  free(ptr);
  CLL_Display();
}

int main(void) 
{
  CLL_Creation();
  CLL_Insertion_Beg();
  CLL_Insertion_End();
  CLL_Delete_Beg();
  CLL_Delete_End();
  return 0;
}