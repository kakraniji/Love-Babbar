int addtoone(struct Node *p)
{
    int x;
    if(p==NULL)
    return 1;
    x=addtoone(p->next)+p->data;
    p->data=x%10;
    return x/10;
}

Node* addOne(Node *head) 
{
    int carry=addtoone(head);
    struct Node *t;
    if(carry!=0)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=carry;
        t->next=head;
        head=t;
        
    }
    return head;
    
}
