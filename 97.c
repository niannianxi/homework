#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int data;
    struct ListNode *next;
};
struct ListNode *createlist()
{
    int x;
    struct ListNode *head=NULL,*ptr;
    scanf("%d",&x);
    while(x!=-1)
    {
      ptr=(struct ListNode *)malloc(sizeof(struct ListNode));
     ptr->data=x;
     ptr->next=head;
     head=ptr;
scanf("%d",&x);
}
return head;
}
int main()
{
	struct ListNode *head;
	head=createlist();
	printf("����������Ϊ(����-1��������)��\n");
	while(head)
	{
		 printf("%d",head->data);
		 head=head->next;
	}
 } 
