Node* pairWiseSwap(struct Node* head) {
    
    if(head==NULL)
    return head;
    if(head->next==NULL)
    return head;
    struct Node *p=head;
    while(p!=NULL && p->next!=NULL)
    {
        int x=p->data;
        p->data=p->next->data;
        p->next->data=x;
        p=p->next->next;
    }
    return head;
}
