struct Node *reverse(struct Node *p)
{
    struct Node *head;
    struct Node *q=NULL;
    struct Node *r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
        
    }
    head=q;
    return head;
    
}


bool isPalindrome(Node *head)
{
    struct Node *fp=head;
    struct Node *sp=head;
    
    while(fp!=NULL && fp->next!=NULL)
    {
        fp=fp->next->next;
        sp=sp->next;
    }
    sp=reverse(sp);
    fp=head;
    while(sp!=NULL)
    {
        if(sp->data!=fp->data)
        return false;
        fp=fp->next;
        sp=sp->next;
    }
    return true;
}
