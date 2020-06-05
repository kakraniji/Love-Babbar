Node *removeDuplicates(Node *root)
{
    struct Node *p=root;
    struct Node *q=p->next;
    while(q!=NULL)
    {
    if(p->data!=q->data)
    {
        p=q;
        q=q->next;
    }
    else
    {
        p->next=q->next;
        free(q);
        q=p->next;
    }
    }
    return root;
}
