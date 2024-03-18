#include<iostream>
#include<string>
#include<time.h>
#include<fstream>
using namespace std;
int main()
{
	int n; //the number for password elements
	int m; //the number for zhuyin elements
	while(cout<<"請輸入密碼數量：")
	{
		double st,en;
		cin>>m;
		cout<<endl<<"請輸入注音數量：";
		cin>>n;
		string pass[m];
		string zhuyin[n];
		int zhucount[n]={0};
		cout<<endl<<"請輸入密碼表："<<endl;
		for(int i=0;i<m;i++)
		{
			cin>>pass[i];
		}
		cout<<"請輸入注音比對表："<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>zhuyin[i];
		}
		cout<<endl;
		st=clock();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int l1;
				int l2;
				int cforz=0; //count for zhuyin
				int cforp=0; //count for password
				l1=zhuyin[i].length();
				l2=pass[j].length();
				//cout<<l2<<endl;
				for(int k=cforp;k<l2;k++)
				{
					//cout<<i<<" "<<j<<" "<<k<<endl;
					//cout<<pass[j][k]<<endl;
					if(pass[j][k]!=zhuyin[i][cforz])
					{
						cforz=0;
						cforp++;
					}
					else
					{
						cforz++;
						if(cforz==l1)
						{
							//cout<<"right!"<<cforz<<endl;
							zhucount[i]=zhucount[i]+1;
							//cout<<"zhucount i="<<i<<": "<<zhucount[i]<<endl;
							cforz=0;
							cforp=cforp+l1;
						}
					}
					//cout<<cforz<<endl;
				}
			}
			cout<<zhuyin[i]<<"："<<zhucount[i]<<endl;
		}
		en=clock();
		cout<<"Run time: "<<en-st<<endl;
		cout<<"**end**"<<endl;
		cout<<endl;
	}
	return 0;
}
