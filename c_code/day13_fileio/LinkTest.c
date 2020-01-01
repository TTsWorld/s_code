#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int id;
    struct Node *next;
}Node;

Node *createLink()
{
    Node *pCur = NULL;
    Node *head = (Node *)malloc(sizeof(Node));
    head->id = -1;
    head->next = NULL;
    pCur = head;

    for(int i=0;i<100;i++)
    {
        Node *p = (Node *)malloc(sizeof(Node));
        if (p == NULL)
        {
            perror("malloc error");
            return NULL;
        }
        p->id = i;
        p->next = NULL;
        pCur->next = p;

        pCur = p;
    }
    return head;
}

void printLink(Node *link){

    if (link == NULL || link->next == NULL)
    {
        return;
    }
    Node *pCur = link;
    while(pCur !=NULL)
    {
        printf("%d\n", pCur->id);
        pCur = pCur->next;
    }
}
int main()
{

       

    Node *link = NULL;
    link = createLink();
    printLink(link);

    printf("Hello world\n");
    return 0;
}

