//This is the trie code for inputing zhuyin keywords in arrays.
#include<iostream>
#include<string.h>
#include<string>
#include<time.h>
#include<fstream>
using namespace std;
struct TrieNode{
	TrieNode* a[128];
	int n=0;
	bool word;
	TrieNode(){
		memset(a,0,sizeof(TrieNode*)* 128);
		n=0;
	}
}*root=new TrieNode();
void add(char *s){
	TrieNode*p=root;
	for(;*s;++s){
		if(!p->a[*s]){
			p->a[*s] = new TrieNode();
			p=p->a[*s];
		}
	}
	p->n++;
	p->word = true;
}
bool lookup(char *l,int m,int n){
	int cur=0;
	TrieNode*p=root;
	int c=0;
	int no=0;
	for(;*l+1;l++){
		if(!p->a[*l]){
			if(no==n){
				return false;
			}
			else{
				if(c==m){
					return true;
				}else{
					no++;
					TrieNode*p=root;
					c=0;
					p=p->a[*l+1];
				}
			}
		}
		else{
			c++;
			p=p->a[*l];
			no=0;
		}
	}
}
void release(TrieNode* p = root)
{
    for (int i=0; i<128; ++i)
        if (p->a[i])
            release(p->a[i]);
    delete p;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m;
	cin>>m; //input how many zhuyin keys
	string zhu[m];
	string password="abcdef";
	for(int i=0;i<m;i++){
        cin>>zhu[i]; //input zhuyin keys
	}
	double st=0;
	double en=0;
	st=clock();
	int l2;
	l2=password.length();
	for(int i=0;i<m;i++){
        int l1;
        l1=zhu[i].length();
        char zh[l1];
        for(int j=0;j<l1;j++){
            zh[j]=zhu[i][j];
        }
        add(zh);
	}
	char pass[l2];
	for(int i=0;i<l2;i++){
        pass[i]=password[i];
	}
	for(int i=0;i<m;i++){
        int l1;
        l1=zhu[i].length();
        cout<<lookup(pass,l1,l2)<<endl;
	}
	release(root);
	en=clock();
	cout<<"Run time: "<<en-st<<"ms"<<endl;
	return 0;
}
