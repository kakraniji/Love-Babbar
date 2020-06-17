// ye mene hi code likha he!! question is available on hackerrank !!!


void insert(struct Node *p,int x)
{
	struct Node *t;
	t=(struct Node *)malloc(sizeof(struct Node ));
	t->data=x;
	if(first==NULL)
	{
		t->prev=NULL;
		t->next=NULL;
		first=t;
	}
	if(p->data>x)
	{
		t->prev=NULL;
		t->next=first;
		first->prev=t;
		first=t;
	}
	else
	{
		while(p!=NULL && p->data<x)
		{
			q=p;
			p=p->next;
		}
		t->next=q->next;
		t->prev=q;
		q->next=t;
		if(p!=NULL)
		p->prev=t;
		
	}
}
