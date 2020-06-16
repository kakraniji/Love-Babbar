//very important question !!!
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    struct Node *fp=head;
    struct Node *sp=head;
    
   while(fp->next!=head &&fp->next->next!=head)
   {
       fp=fp->next->next;
       sp=sp->next;
   }
   *head2_ref=sp->next;
   sp->next=head;
   *head1_ref=head;
   if(fp->next->next==head)
   fp->next->next=*head2_ref;
   else
   fp->next=*head2_ref;
   
}
