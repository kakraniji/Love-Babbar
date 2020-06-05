void recursiveReverse(struct Node *q,struct Node *p)
{
	
	if(p!=NULL)
	{
		recursiveReverse(p,p->next);
		p->next=q;
	}
	else
	{
		first=q;
	}
	
}
