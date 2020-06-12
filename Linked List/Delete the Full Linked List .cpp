void deletefull(struct Node *p)
{
	struct Node *q;
	while(p!=NULL)
	{
		q=p;
		p=p->next;
		free(q);
		
	}
	first=NULL;
}
