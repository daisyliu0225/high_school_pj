#include<iostream>
#include<string>
#include<time.h>
#include<fstream>
using namespace std;
int main()
{
	int m; //the number for zhuyin elements
	int total=0;
    double st,en;
    string pass="ji32k7";
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
	string k[t]; //t means how many keywords
	int r=0;
	for(list<string>::iterator j=key.begin();j!=key.end();j++)
	{
		k[r]=*j;
		r++;
	}
    int zhucount[n]={0};
    cout<<endl;
    st=clock();
    for(int i=0;i<t;i++)
    {
        int l1;
        int l2;
        int cforz=0; //count for zhuyin
        int cforp=0; //count for password
        l1=zhuyin[i].length();
        l2=pass.length();
        for(int k=cforp;k<l2;k++)
        {
            if(pass[k]!=zhuyin[i][cforz])
            {
                cforz=0;
                cforp++;
            }
            else
            {
                cforz++;
                if(cforz==l1)
                {
                    total++;
                    cforz=0;
                    cforp=cforp+l1;
                }
            }
        }
    }
    en=clock();
    cout<<"Run time: "<<en-st<<endl;
    cout<<"**end**"<<endl;
    cout<<endl;
	return 0;
}
