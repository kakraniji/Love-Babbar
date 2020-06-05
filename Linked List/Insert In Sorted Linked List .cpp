Node *sortedInsert(struct Node* head, int data) {
    
    struct Node *t,*q;
    struct Node *p=head;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=data;
    t->next=NULL;
    if(head==NULL)
    head=t;
    else
    {
        if(p->data>=data)
        {
            t->next=head;
            head=t;
            return head;
            
        }
        while(p!=NULL && p->data<data )
        {
            q=p;
            p=p->next;
        }
        t->next=q->next;
        q->next=t;
        return head;
    }
    
    
    
}
