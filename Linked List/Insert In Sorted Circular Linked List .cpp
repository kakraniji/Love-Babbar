Node *sortedInsert(Node* head, int x)
{
    struct Node *p=head;
    struct Node *t,*q;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(head==NULL)
    {
        head=t;
        head->next=head;
        return head;
    }
    if(p->data>=x)
    {
        while(p->next!=head)
        p=p->next;
        t->next=p->next;
        p->next=t;
        head=t;
        return head;
    }
    else
    {
    //yaha par ye line baht important he !! jab setting na bethe tab jaruri nahi he ki tailing pointer lena hi he hamesha !!
        while(p->next!=head && p->next->data<x)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
    return head;
    
    
    
    
}
