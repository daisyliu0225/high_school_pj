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
        int curl=0;
        int c2=0;
        int i2;
        for(int i=0;i<n;i++){
            int l;
            l=s[i].length();
            int k;
            k=c;
            for(int j=0;j<l;j++){
                if(s[i][j]!=pass[k]){
                    c2=0;
                    break;
                }else{
                    c2++;
                    k++;
                }
            }
            if(l>curl&&c2>0){
                curl=l;
                i2=i;
            }
        }
        if(curl!=0){
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
