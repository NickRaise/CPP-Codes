#include <stdio.h>
#include <stdlib.h>

struct node
{
struct node *lpt;
int info;
struct node *rpt;
};
struct node *first;

void DLL_Display()
{
  struct node *ptr;
  ptr=first;
  printf("The DLL is :-\n");
  while(ptr!=NULL)
    {
      printf("%d\t",ptr->info);
      ptr=ptr->rpt;
    }
  
}

void DLL_Creation()
{
  int n;
  struct node *ptr,*cpt;
  printf("Enter the no. of nodes you want to create : ");
  scanf("%d",&n);
  ptr=(struct node *)malloc(sizeof(struct node));
  first=cpt=ptr;
  printf("Enter the data : ");
  scanf("%d",&first->info);
  first->lpt=NULL;
  for(int i=2;i<=n;i++)
    {
      ptr=(struct node *)malloc(sizeof(struct node));
      printf("Enter the data : ");
      scanf("%d",&ptr->info);
      ptr->lpt=cpt;
      cpt->rpt=ptr;
      cpt=ptr;
    }
  ptr->rpt=NULL;
  DLL_Display();
}

int main(void) {
  DLL_Creation();
  return 0;
}