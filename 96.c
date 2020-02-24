#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int data;
    struct ListNode *next;
};
struct ListNode *readlist()
{
int num;
struct ListNode *head=NULL,*ptr=NULL,*tail=NULL;
scanf("%d",&num);
while(num!=-1)
{
ptr=(struct ListNode *)malloc(sizeof(struct ListNode));
ptr->data=num;
ptr->next=NULL;
if(head==NULL) head=ptr;
else tail->next=ptr;
tail=ptr;
scanf("%d",&num);
}
return head;
}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int j = 0, i = 1;
    int length;
    struct ListNode *p,*temp;
    p =(struct ListNode *)malloc(sizeof(struct ListNode));
    p = head;
    while(p != NULL){

        p =p->next;
        j++;
    }
    length = j;
    p = head;
    if(length == 1){
        head = NULL;
        return head;
    }
    if(length == n){
        temp = head;
        head = head->next;
        temp = NULL;
    }
    
    while(i != length-n+1 && p != NULL && p->next != NULL){

        if(i != length - n){
            p = p->next;
            i++;
        }
        else if(i == length-1){
            p->next = NULL;
            return head;
        }
        
        else{
            temp = p->next;
            p->next = temp->next;
            i++;
        }
    }
    printf("%d %d",length,i);
    
    return head;

}
int main()
{
	int n; 
	struct ListNode *head;
	printf("请输入删除链表的倒数第几个节点：\n");
	scanf("%d",&n) ;
	head=readlist();
	head=emoveNthFromEnd(struct ListNode* head,int n);
	while(head)
	{
		 printf("%d",head->data);
		 head=head->next;
	}
 } 
