#include<iostream>
#include<string>
#include<time.h>
#include<fstream>
#include<list>
using namespace std;
int main()
{
	double st=0;
	double en=0;
	int s=0;//the integer for counting how many passwords
	list<string> data;
	ifstream fin1;
	fin1.open("password.txt");
	string line1;
	while(getline(fin1,line1))
	{
		data.push_back(line1);
		s++;
	}
	fin1.close();
	list<string> key;
	ifstream fin2;
	fin2.open("data.txt");
	string line2;
	int t=0;
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
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<s;j++)
		{
			int l1;
			int l2;
			int cforz=0;
			int cforp=0;
			l1=k[i].length();
			l2=d[j].length();
			for(int f=cforp;f<l2;f++)
			{
				if(d[j][f]!=k[i][cforz])
				{
					cforz=0;
					cforp++;
				}
				else
				{
					cforz++;
					if(cforz==l1)
					{
						zhucount[i]=zhucount[i]+1;
						cforz=0;
						cforp=cforp+l1;
					}
				}
			}
		}
	}
	en=clock();
	cout<<"Run time: "<<en-st<<"ms"<<endl;
	for(int i=0;i<t;i++)
	{
		if(zhucount[i]>0){
			cout<<k[i]<<":"<<zhucount[i]<<endl;
		}
	}
	cout<<"**end**"<<endl;
	cout<<endl;
	return 0;
}

