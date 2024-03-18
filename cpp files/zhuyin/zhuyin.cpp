#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<list>
#include<time.h>
#include<cmath>
using namespace std;
int main(){
    double st=0;
    double en=0;
    int total=0;
    map<string, string> abczhu;
    map<string, string>::iterator iter;
    abczhu.insert(pair<string,string>("1","ㄅ"));
    abczhu.insert(pair<string,string>("q","ㄆ"));
    abczhu.insert(pair<string,string>("Q","ㄆ"));
    abczhu.insert(pair<string,string>("a","ㄇ"));
    abczhu.insert(pair<string,string>("A","ㄇ"));
    abczhu.insert(pair<string,string>("z","ㄈ"));
    abczhu.insert(pair<string,string>("Z","ㄈ"));
    abczhu.insert(pair<string,string>("2","ㄉ"));
    abczhu.insert(pair<string,string>("w","ㄊ"));
    abczhu.insert(pair<string,string>("W","ㄊ"));
    abczhu.insert(pair<string,string>("s","ㄋ"));
    abczhu.insert(pair<string,string>("S","ㄋ"));
    abczhu.insert(pair<string,string>("x","ㄌ"));
    abczhu.insert(pair<string,string>("X","ㄌ"));
    abczhu.insert(pair<string,string>("3","ˇ"));
    abczhu.insert(pair<string,string>("e","ㄍ"));
    abczhu.insert(pair<string,string>("E","ㄍ"));
    abczhu.insert(pair<string,string>("d","ㄎ"));
    abczhu.insert(pair<string,string>("D","ㄎ"));
    abczhu.insert(pair<string,string>("c","ㄏ"));
    abczhu.insert(pair<string,string>("C","ㄏ"));
    abczhu.insert(pair<string,string>("4","ˋ"));
    abczhu.insert(pair<string,string>("r","ㄐ"));
    abczhu.insert(pair<string,string>("R","ㄐ"));
    abczhu.insert(pair<string,string>("f","ㄑ"));
    abczhu.insert(pair<string,string>("F","ㄑ"));
    abczhu.insert(pair<string,string>("v","ㄒ"));
    abczhu.insert(pair<string,string>("V","ㄒ"));
    abczhu.insert(pair<string,string>("5","ㄓ"));
    abczhu.insert(pair<string,string>("t","ㄔ"));
    abczhu.insert(pair<string,string>("T","ㄔ"));
    abczhu.insert(pair<string,string>("g","ㄕ"));
    abczhu.insert(pair<string,string>("G","ㄕ"));
    abczhu.insert(pair<string,string>("b","ㄖ"));
    abczhu.insert(pair<string,string>("B","ㄖ"));
    abczhu.insert(pair<string,string>("6","ˊ"));
    abczhu.insert(pair<string,string>("y","ㄗ"));
    abczhu.insert(pair<string,string>("Y","ㄗ"));
    abczhu.insert(pair<string,string>("h","ㄘ"));
    abczhu.insert(pair<string,string>("H","ㄘ"));
    abczhu.insert(pair<string,string>("n","ㄙ"));
    abczhu.insert(pair<string,string>("N","ㄙ"));
    abczhu.insert(pair<string,string>("7","˙"));
    abczhu.insert(pair<string,string>("u","ㄧ"));
    abczhu.insert(pair<string,string>("U","ㄧ"));
    abczhu.insert(pair<string,string>("j","ㄨ"));
    abczhu.insert(pair<string,string>("J","ㄨ"));
    abczhu.insert(pair<string,string>("m","ㄩ"));
    abczhu.insert(pair<string,string>("M","ㄩ"));
    abczhu.insert(pair<string,string>("8","ㄚ"));
    abczhu.insert(pair<string,string>("i","ㄛ"));
    abczhu.insert(pair<string,string>("I","ㄛ"));
    abczhu.insert(pair<string,string>("k","ㄜ"));
    abczhu.insert(pair<string,string>("K","ㄜ"));
    abczhu.insert(pair<string,string>(",","ㄝ"));
    abczhu.insert(pair<string,string>("9","ㄞ"));
    abczhu.insert(pair<string,string>("o","ㄟ"));
    abczhu.insert(pair<string,string>("O","ㄟ"));
    abczhu.insert(pair<string,string>("l","ㄠ"));
    abczhu.insert(pair<string,string>("L","ㄠ"));
    abczhu.insert(pair<string,string>(".","ㄡ"));
    abczhu.insert(pair<string,string>("0","ㄢ"));
    abczhu.insert(pair<string,string>("p","ㄣ"));
    abczhu.insert(pair<string,string>("P","ㄣ"));
    abczhu.insert(pair<string,string>(";","ㄤ"));
    abczhu.insert(pair<string,string>("/","ㄥ"));
    abczhu.insert(pair<string,string>("-","ㄦ"));
    list<string> data;
    int s=0;
    ifstream fin1;
    fin1.open("result.txt");
    string line1;
    while(getline(fin1,line1)){
        data.push_back(line1);
        s++;
    }
    fin1.close();
	st=clock();
	fstream fin3;
	fin3.open("answer.txt",ios::out);
    for(list<string>::iterator i=data.begin();i!=data.end();i++)
	{
	    string s2;
	    s2=*i;
	    fin3<<s2<<endl;
	    cout<<s2<<endl;
	    int l1;
	    l1=s2.length();
        for(int i=0;i<l1;i++){
            for(iter=abczhu.begin();iter!=abczhu.end();iter++){
                string a;
                a=s2[i];
                iter=abczhu.find(a);
                if(iter!=abczhu.end()){
                    fin3<<iter->second;
                    break;
                }else{
                    fin3<<s2[i];
                    break;
                }
            }
        }
        fin3<<endl;
	}
	fin3.close();
	en=clock();
	cout<<"Run time: "<<en-st<<"ms"<<endl;
	cout<<"total="<<total<<endl;
	cout<<"**end**"<<endl;
	cout<<endl;
	return 0;
}
