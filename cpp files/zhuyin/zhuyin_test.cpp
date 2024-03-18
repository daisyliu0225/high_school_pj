#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string, string> abczhu;
    map<string, string>::iterator iter;
    abczhu.insert(pair<string,string>("1","£t"));
    abczhu.insert(pair<string,string>("q","£u"));
    abczhu.insert(pair<string,string>("a","£v"));
    abczhu.insert(pair<string,string>("z","£w"));
    abczhu.insert(pair<string,string>("2","£x"));
    abczhu.insert(pair<string,string>("w","£y"));
    abczhu.insert(pair<string,string>("s","£z"));
    abczhu.insert(pair<string,string>("x","£{"));
    abczhu.insert(pair<string,string>("3","£¾"));
    abczhu.insert(pair<string,string>("e","£|"));
    abczhu.insert(pair<string,string>("d","£}"));
    abczhu.insert(pair<string,string>("c","£~"));
    abczhu.insert(pair<string,string>("4","£¿"));
    abczhu.insert(pair<string,string>("r","£¡"));
    abczhu.insert(pair<string,string>("f","£¢"));
    abczhu.insert(pair<string,string>("v","££"));
    abczhu.insert(pair<string,string>("5","£¤"));
    abczhu.insert(pair<string,string>("t","£¥"));
    abczhu.insert(pair<string,string>("g","£¦"));
    abczhu.insert(pair<string,string>("b","£§"));
    abczhu.insert(pair<string,string>("6","£½"));
    abczhu.insert(pair<string,string>("y","£¨"));
    abczhu.insert(pair<string,string>("h","£©"));
    abczhu.insert(pair<string,string>("n","£ª"));
    abczhu.insert(pair<string,string>("7","£»"));
    abczhu.insert(pair<string,string>("u","£¸"));
    abczhu.insert(pair<string,string>("j","£¹"));
    abczhu.insert(pair<string,string>("m","£º"));
    abczhu.insert(pair<string,string>("8","£«"));
    abczhu.insert(pair<string,string>("i","£¬"));
    abczhu.insert(pair<string,string>("k","£­"));
    abczhu.insert(pair<string,string>(",","£®"));
    abczhu.insert(pair<string,string>("9","£¯"));
    abczhu.insert(pair<string,string>("o","£°"));
    abczhu.insert(pair<string,string>("l","£±"));
    abczhu.insert(pair<string,string>(".","£²"));
    abczhu.insert(pair<string,string>("0","£³"));
    abczhu.insert(pair<string,string>("p","£´"));
    abczhu.insert(pair<string,string>(";","£µ"));
    abczhu.insert(pair<string,string>("/","£¶"));
    abczhu.insert(pair<string,string>("-","£·"));
    string s;
    s="ji32k7";
    int l1;
    l1=s.length();
    for(int i=0;i<l1;i++){
        for(iter=abczhu.begin();iter!=abczhu.end();iter++){
            string a;
            a=s[i];
            iter=abczhu.find(a);
            if(iter!=abczhu.end()){
                cout<<iter->second;
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}
