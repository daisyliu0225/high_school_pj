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
    Node *head=&a; //�ŧiptr�A�ñN�L�u�V�`�Ia
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
        printf("address=%p, ",tail); //�L�X�`�I����}
        printf("data=%d ",tail->data); //�L�X�`�I�����
        printf("prev=%p\n",tail->prev); //�L�X�U�@�Ӹ`�I��}
        tail=tail->prev;  //�Nptr���V�U�@�Ӹ`�I
    }

    system("PAUSE");
    return 0;
}
