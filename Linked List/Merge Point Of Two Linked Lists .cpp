//FIRST METHOD:

int intersectPoint(Node* head1, Node* head2)
{
   struct Node *p=head1;
   struct Node *q=head2;
   int c1=0;
   int c2=0;
   
   while(p!=NULL)
   {
       c1++;
       p=p->next;
   }
   while(q!=NULL)
   {
       c2++;
       q=q->next;
   }
   p=head1;
   q=head2;
   if(c1>c2)
   {
       int difference=c1-c2;
       for(int i=0;i<difference;i++)
       p=p->next;
       
   }
   else
   {
       int difference=c2-c1;
       for(int i=0;i<difference;i++)
       q=q->next;
   }
   while(p!=NULL)
   {
       p=p->next;
       q=q->next;
       if(p==q)
       return p->data;
   }
    
    return -1;
}

//2ND METHOD:

int intersectPoint(Node* head1, Node* head2)
{
   struct Node *p=head1;
   struct Node *q=head2;
   stack<Node*>s1;
   stack<Node*>s2;
   while(p!=NULL)
   {
       s1.push(p);
       p=p->next;
   }
   while(q!=NULL)
   {
       s2.push(q);
       q=q->next;
   }
   struct Node* x;
   if(s1.top()!=s2.top())
   return -1;
   else
   {
   while(s1.top()==s2.top())
   {
       x=s1.top();
       s1.pop();
       s2.pop();
     }
       
     return x->data;
   }
   
   
}


