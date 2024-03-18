#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node Node;

int main(int argc, char *argv[])
{
    char[50];
    string s;
    while(scanf("")){

    }
    Node a,b,c;
    Node *head=&a; //宣告ptr，並將他只向節點a
    Node *tail=&c;
    a.data=12;
    a.next=&b;
    a.prev=NULL;
    b.data=30;
    b.next=&c;
    b.prev=&a;
    c.data=64;
    c.prev=&b;
    c.next=NULL;

    while(tail!=NULL){
        printf("address=%p, ",tail); //印出節點的位址
        printf("data=%d ",tail->data); //印出節點的資料
        printf("prev=%p\n",tail->prev); //印出下一個節點位址
        tail=tail->prev;  //將ptr指向下一個節點
    }

    system("PAUSE");
    return 0;
}
