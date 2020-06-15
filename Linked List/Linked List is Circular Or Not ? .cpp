//just like check for loop code in linked list !!
bool isCircular(Node *head)
{
    struct Node *fp=head;
    struct Node *sp=head;
    while(fp!=NULL && fp->next!=NULL)
    {
        fp=fp->next->next;
        sp=sp->next;
        if(fp==sp)
        return true;
    }
    return false;
    
}
