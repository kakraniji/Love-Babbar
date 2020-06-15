void  lasttofront(struct Node *p)
{
	struct Node *q;
	if(p==NULL || p->next==NULL)
	return;
	else
	{
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
		}
		p->next=first;
		first=p;
		q->next=NULL;
	}
}
