//current node ko delete karne ke lie usse pehle wale node ki link ko modify karna padta he kaha se leke aaoge usse pehle wale node ki 
//link?? isilie uski agli node ko hi delete karte he !!!
void deleteNode(Node *node)
{
    struct Node *p=node;
    struct Node *q=p->next;
    p->data=q->data;
    p->next=q->next;
    free(q);
}
