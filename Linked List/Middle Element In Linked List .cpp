int getMiddle(Node *head)
{
   struct Node *fp=head;
   struct Node *sp=head;
   while(fp!=NULL && fp->next!=NULL)
   {
       fp=fp->next->next;
       sp=sp->next;
   }
   return sp->data;
}
