#include<iostream>
#include<string>
#include<fstream> 
#include<list>
#include<time.h> 
using namespace std;
void printList(list<string>a)
{
	for(list<string>::iterator it=a.begin();it!=a.end();it++)
	{
		cout<<*it<<endl;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	double st,en;
	st=clock();
	list<string> pass;
	ifstream fin;
	fin.open("datazhu.txt");
	string line;
	int s;
	while(getline(fin,line))
	{
		pass.push_back(line);
	}
	fin.close();
	list<string>::iterator it = pass.begin(); 
	printList(pass);
	en=clock();
	cout<<"Run time: "<<(en-st)<<" ms"<<endl;
	return 0;
}
