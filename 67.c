#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    printf("\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
struct ListNode *createlist()
{
    struct ListNode *p,*h,*per;
    h=NULL;
    p=(struct ListNode *)malloc(sizeof(struct ListNode ));
    scanf("%d",&p->data);
    while(p->data!=-1)
    {
         if(h==NULL)
         h=p;
         else per->next=p;
         per=p;
       p=(struct ListNode *)malloc(sizeof(struct ListNode ));
       p->next=NULL;
      scanf("%d",&p->data);
    }
    return h;
}
