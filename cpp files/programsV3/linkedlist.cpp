#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

struct node{
    char data;
    struct node *next;
};
void add(node *head, char s){
    node *a=new node;
    a->data=s;
    a->next=NULL;
    if (head->next == NULL) {
        head->next=a;
    } else {
        node *b = head;
        while(b->next!=NULL){
                b=b->next;
        }
        b->next=a;
        a->next=NULL;
    }
}
int main(){
    string s;
    cin>>s;
    int l;
    l=s.length();
    node *root=new node;
    root->next=NULL;
    char a[l];
    for(int i=0;i<l;i++){
        a[i]=s[i];
        add(root,a[i]);
    }
    return 0;
}
