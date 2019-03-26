/**
find the max node and delete the max number in a list
**/

void Delmaxnodes(LinkNode *&L)
{
    LinkNode *pre=L,*p=L->next;
    T max=p->data;
    while(p != NULL)
    {
        if(p -> data == max)
            max=p->data;
        p=p->next;
    }
    p=L->next;
    while(p != NULL)
    {
        if(p->data == max)
        {
            pre->next = p->next;
            free(p);
            p = pre->next;
        }
        else
        {
            pre = p;
            p = p->next;
        }
    }
}