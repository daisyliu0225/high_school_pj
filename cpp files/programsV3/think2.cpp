#include<iostream>
#include<string>
using namespace std;
string s[100];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string pass;
    cin>>pass;
    int passl;
    passl=pass.length();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int c=0; //counter of letters
    int cs=0; //meaning the number of keywords
    int mini=10000;
    int l3;
    while(c<passl){
        int curl=1000;
        int c2=0;
        int i2;
        for(int i=0;i<n;i++){
            int l;
            l=s[i].length();
            int k;
            k=c;
            for(int j=0;j<l;j++){
                if(s[i][j]!=pass[k]){
                    //cout<<"no j="<<j<<endl;
                    //cout<<"no s[i][j]="<<s[i][j]<<endl;
                    //cout<<"no pass[k]="<<pass[k]<<endl;
                    c2=0;
                    break;
                }else{
                    c2++;
                    //cout<<"s[i][j]="<<s[i][j]<<endl;
                    //cout<<"pass[k]="<<pass[k]<<endl;
                    k++;
                }
            }
            if(l<curl&&c2>0){
                //cout<<"i="<<i<<endl;
                curl=l;
                i2=i;
                //cout<<"curl="<<curl<<endl;
            }
        }
        //cout<<"out"<<endl;
        //cout<<"c="<<c<<endl;
        //cout<<"curl= "<<curl<<endl;
        if(curl!=1000){
            cout<<s[i2]<<' ';
            c=c+curl;
            cs++;
        }else{
            c++;
        }
    }
    cout<<"ans="<<cs<<endl;
    return 0;
}
