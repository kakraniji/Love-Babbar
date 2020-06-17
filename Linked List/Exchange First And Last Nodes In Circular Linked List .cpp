
//yaha par last second node se khelna padta he !!

while(p->next->next!=head)
p=p->next;
p->next->next=head->next;
head->next=p->next;
p->next=head;
head=head->next;

return head;
