
//yaha par last second node se khelna padta he !!

//pele first node ko uthakar last second node se point karwao or jo last node padi he use first se point karwado !!!

while(p->next->next!=head)
p=p->next;
p->next->next=head->next;
head->next=p->next;
p->next=head;
head=head->next;

return head;
