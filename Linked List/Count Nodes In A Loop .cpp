int countNodesinLoop(struct Node *head)
{
     struct Node *fp=head;
     struct Node *sp=head;
     int c=0;
     while(fp!=NULL && fp->next!=NULL)
     {
         fp=fp->next->next;
         sp=sp->next;
         if(fp==sp)
         {
             while(fp->next!=sp)
             {
                 fp=fp->next;
                 c++;
             }
             return c+1;
             
         }
     }
}
