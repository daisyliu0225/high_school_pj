#include<iostream>
#include<string>
#include<time.h>
#include<fstream>
#include<list>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	double st=0;
	double en=0;
	int s=0;//the integer for counting how many passwords
	list<string> data; //data is the data of passwords
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
	int t=0;//the integer for counting how many keywords
	while(getline(fin2,line2))
	{
		key.push_back(line2);
		t++;
	}
	fin2.close();
	st=clock();
	string d[s];
	int q=0; //code for transferring the linked-string password data into string
	for(list<string>::iterator i=data.begin();i!=data.end();i++)
	{
		d[q]=*i;
		q++;
	}
	string k[t]; //t means how many keywords
	int r=0;
	for(list<string>::iterator j=key.begin();j!=key.end();j++)
	{
		k[r]=*j;
		r++;
	}
	int zhucount[t]={0};
	//main
	en=clock();
	cout<<"Run time: "<<en-st<<"ms"<<endl;
	for(int i=0;i<t;i++)
	{
		cout<<k[i]<<"¡G"<<zhucount[i]<<endl;
	}
	cout<<"**end**"<<endl;
	cout<<endl;
	return 0;
}

