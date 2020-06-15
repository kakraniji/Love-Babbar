// dono no's ko reverse karke hi jodte he bcoz initially p and q dono linked list ke head ko point kar rahe honge !!
//to starting nodes ko access kar pate he apn traversing ke doran !!!
Node* addTwoLists(Node* first, Node* second) {
    
    struct Node *p=first;
    struct Node *q=second;
    int x,y,sum,carry=0;
    struct Node *t,*third=NULL,*last;
    while(p!=NULL || q!=NULL)
    {
        x=(p!=NULL)?p->data:0;
        y=(q!=NULL)?q->data:0;
        sum=x+y+carry;
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=(sum%10);
        t->next=NULL;
        if(third==NULL)
        {
            third=t;
            last=t;
        }
        else
        {
            last->next=t;
            last=t;
        }
        carry=sum/10;
        if(p!=NULL)p=p->next;
        if(q!=NULL)q=q->next;
        
    }
    if(carry!=0)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=carry;
        t->next=NULL;
        last->next=t;
    }
    
    
return third;
}
