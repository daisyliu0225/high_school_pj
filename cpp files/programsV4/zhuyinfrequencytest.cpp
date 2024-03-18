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
    //ofstream file;
	double st=0;
	double en=0;
	int total=0;
	long long int s=0;//the integer for counting how many passwords
	list<string> data;
	ifstream fin1;
	fin1.open("10millionpassword.txt");
	string line1;
	while(getline(fin1,line1))
	{
		data.push_back(line1);
		s++;
	}
	fin1.close();
	list<string> key;
	ifstream fin2;
	fin2.open("zhuyin.txt");
	string line2;
	long long int t=0;
	while(getline(fin2,line2))
	{
		key.push_back(line2);
		t++;
	}
	fin2.close();
	st=clock();
	string k[t]; //t means how many keywords
	long long int r=0;
//	file.open("text.txt",ios::out);
	for(list<string>::iterator j=key.begin();j!=key.end();j++)
	{
		k[r]=*j;
		r++;
	}
	for(list<string>::iterator i=data.begin();i!=data.end();i++)
	{
	    bool yes=0;
	    string s;
	    s=*i;
	    //cout<<s<<endl;
	    int same=0;
	    int l1;
	    l1=s.length();
		for(int j=0;j<t;j++)
		{
			int l2;
			int c=0;
			int cforz=0;
			int cforp=0;
			l2=k[j].length();
			for(int f=cforp;f<l1;f++)
			{
				if(s[f]!=k[j][cforz])
				{
					cforz=0;
				}
				else
				{
					cforz++;
					if(cforz==l2)
					{
					    //cout<<"cs"<<c<<endl;
						//cout<<"cforps"<<cforp<<endl;
					    same++;
					    cforz=0;
					    c=cforp;
						cforp=cforp+l2;
						cout<<"ce"<<c<<endl;
						cout<<"cforpe"<<cforp<<endl;
						if(cforp-l2==c&&same==2){
                            total++;
                            file<<s<<endl;
                            yes=1;
					    }
                    }
                }
            }
        }
    }
 //   file.close();
	en=clock();
	cout<<"Run time: "<<en-st<<"ms"<<endl;
	cout<<"total="<<total<<endl;
	cout<<"**end**"<<endl;
	cout<<endl;
	return 0;
}
