Node* sortedMerge(Node* head1,   Node* head2)
{
    struct Node *p=head1;
    struct Node *q=head2;
    struct Node *third,*last;
    
    
    
    if(p->data<q->data)
    {
        third=p;
        last=p;
        p=p->next;
        last->next=NULL;
    }
    else
    {
        third=q;
        last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL &&  q!=NULL)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(q==NULL)
    last->next=p;
    else
    last->next=q;
    
    return third;
    
    
}
