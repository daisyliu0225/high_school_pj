#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile("data.txt");
	char f[]={'1','q','a','z','2','w','s','x','e','d','c','r','f','v','5','t','g','b','y','h','n','@'};
	char m[]={'u','j','m','@'};
	char b[]={'8','i','k',',','9','o','l','.','0','p',';','/','-','@'};
	char sounds[]={' ','6','3','4','7'};
	for(int i=0;i<22;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int k=0;k<14;k++)
			{
				for(int l=0;l<5;l++)
				{
					outfile<<f[i]<<m[j]<<b[k]<<sounds[l]<<endl;
				}
			}
		}
	}
	outfile.close();
	return 0;
}
