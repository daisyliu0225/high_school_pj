#include<iostream>
#include<string>
#include<time.h>
#include<fstream>
#include<list>
#include<cmath>
#include<stack>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fstream file;
	double st=0;
	double en=0;
	int total=0;
	long long int s=0;//the integer for counting how many passwords
	list<string> data;
	ifstream fin1;
	fin1.open("000webhost.txt");
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
	for(list<string>::iterator j=key.begin();j!=key.end();j++)
	{
		k[r]=*j;
		r++;
	}
	int c=0;
	fstream fin3;
	fin3.open("result.txt",ios::out);
	for(list<string>::iterator i=data.begin();i!=data.end();i++) //data of passwords
	{
	    bool yes=0;
	    int c=0;
	    int en=0;
	    string s;
	    s=*i;
	    int same=0;
	    int l1;
	    l1=s.length();
		for(int j=0;j<t;j++) //data of zhuyin elements
		{
		    int in=0;
			int l2;
			int cforz=0;
			int cforp=0;
			l2=k[j].length();
			for(int f=0;f<l1;f++) //loop the passwords for check
			{
				if(s[f]!=k[j][cforz])
				{
				    f=f-cforz;
					cforz=0;
				}
				else
				{
					cforz++;
					if(cforz==l2)
					{
					    en=c;
					    c=f;
					    //cout<<"en "<<en<<endl;
					    //cout<<"c "<<c<<endl;
					    //cout<<"f-en "<<f-en<<endl;
					    //cout<<"l2 "<<l2<<endl;
					    //cout<<s<<endl;
					    same++;
					    cforz=0;
					    int a;
					    a=abs(f-en);
						if(same>=2&&yes==0&&a==l2){
                            int lengthcount=0;
                            int maxi=0;
                            for(int i=0;i<l1;i++){
                                if(s[i]<='9'&&s[i]>='0'){
                                    lengthcount++;
                                }
                                else{
                                    in++;
                                    //cout<<i<<endl;
                                    if(lengthcount>maxi){
                                        maxi=lengthcount;
                                        //cout<<lengthcount<<endl;
                                    }
                                    lengthcount=0;
                                }
                            }
                            if(in==0){
                                maxi=lengthcount;
                            }
                            if(maxi<=3){
                                if(lengthcount!=l1){
                                    cout<<s<<endl;
                                    total++;
                                }
                            }
                            yes=1;
					    }
                    }
                }
			}
        }
    }
    fin3.close();
	en=clock();
	cout<<"Run time: "<<en-st<<"ms"<<endl;
	cout<<"total="<<total<<endl;
	cout<<"**end**"<<endl;
	cout<<endl;
	return 0;
}
