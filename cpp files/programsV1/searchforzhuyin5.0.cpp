#include<iostream>
#include<string.h>
#include<string>
#include<time.h>
#include<fstream>
#include<list>
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
	//cout<<n<<endl;
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
	list<string> data;
	int s=0;
	ifstream fin1;
	fin1.open("Lizard-Squad_LeakedPassword.txt");
	string line1;
	while(getline(fin1,line1))
	{
		data.push_back(line1);
		s++;
	}
	fin1.close();
	list<string> key;
	ifstream fin2;
	fin2.open("zhukey.txt");
	string line2;
	int t=0;
	while(getline(fin2,line2))
	{
		key.push_back(line2);
		t++;
	}
	fin2.close();
	double st=0;
	double en=0;
	st=clock();
	string password[s]; //s means the number of passwords
	int q=0;
	for(list<string>::iterator i=data.begin();i!=data.end();i++) //turn the list of passwords into strings
	{
		password[q]=*i;
		q++;
	}
	string zhu[t]; //t means the number of keywords
	int r=0;
	for(list<string>::iterator j=key.begin();j!=key.end();j++) //turn the list of keywords into strings of keyword
	{
		zhu[r]=*j;
		r++;
	}
	for(int i=0;i<t;i++){
        int l1;
        l1=zhu[i].length();
        char zh[l1];
		for(int j=0;j<l1;j++){
            zh[j]=zhu[i][j];
		}
		add(zh);
	}
	char pass[l];
	for(int i=0;i<s;i++){
		int l2;
		l2=password[i].length();
		for(int j=0;j<l2;j++){
            pass[i][j]=password[i][j];
		}
	}
	cout<<lookup(pass,l1,l2)<<endl;
	release(root);
	en=clock();
	cout<<"Run time: "<<en-st<<"ms"<<endl;
	return 0;
}
