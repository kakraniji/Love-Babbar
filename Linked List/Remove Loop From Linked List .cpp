void removeLoop(Node* head)
{
    struct Node*fp=head;
    struct Node *sp=head;
    while(fp!=NULL && fp->next!=NULL)
    {
        fp=fp->next->next;
        sp=sp->next;
        if(fp==sp)
        {
            fp=head;
            //where they will meet it will be the head of loop!!
            while(fp!=sp)
            {
                fp=fp->next;
                sp=sp->next;
            }
            while(fp->next!=sp)
            fp=fp->next;
            fp->next=NULL;
        }
        
    }
