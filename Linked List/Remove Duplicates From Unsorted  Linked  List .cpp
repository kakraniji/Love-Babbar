Node * removeDuplicates( Node *head) 
{
    struct Node *p=head;
    struct Node *q;
    int max=INT_MIN;
   while(p!=NULL)
   {
       if(p->data>max)
       max=p->data;
       p=p->next;
   }
   int a[max+1]={0};
   p=head;
   while(p!=NULL)
   {
      a[p->data]++;
      if(a[p->data]>1)
      {
          q->next=p->next;
          free(p);
          p=q->next;
          continue;
      }
      q=p;
      p=p->next;
      
       
   }
   return head;
    
}
