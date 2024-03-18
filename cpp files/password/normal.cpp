#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int total=0;
        int l;
        int cap=0;
        int no=0;
        bool alpha=0;
        int num=0;
        int ele=0;
        l=s.length();
        if(l<=4){
            total=total+5;
        }else if(l>=5&&l<=7){
            total=total+10;
        }else{
            total=total+25;
        }
        cout<<"length "<<total<<endl;
        for(int i=0;i<l;i++){
            if(s[i]<='Z'&&s[i]>='A'){
                cap++;
                alpha=1;
            }
            if(s[i]<='z'&&s[i]>='a'){
                no++;
                alpha=1;
            }
        }
        if(cap>=1&&no>=1){
            total=total+25;
        }else if(cap==l||no==l){
            total=total+10;
        }else{
            total=total+0;
        }
        cout<<"alp "<<total<<endl;
        for(int i=0;i<l;i++){
            if(s[i]<='9'&&s[i]>='0'){
                num++;
            }
            if(s[i]<'0'){
                ele++;
            }else if(s[i]>=':'&&s[i]<='@'){
                ele++;
            }else if(s[i]>='['&&s[i]<='`'){
                ele++;
            }else if(s[i]>='{'&&s[i]<='~'){
                ele++;
            }
        }
        if(num>1){
            total=total+20;
        }else if(num==1){
            total=total+10;
        }else{
            total=total+0;
        }
        cout<<"num "<<total<<endl;
        if(ele==0){
            total=total+0;
        }else if(ele==1){
            total=total+10;
        }else{
            total=total+25;
        }
        cout<<"ele "<<total<<endl;
        if(alpha==1&&num>0){
            total=total+2;
        }else if((alpha==1&&num>0&&ele>0)||(cap>0&&no>0&&num>0)){
            total=total+3;
        }else if(cap>0&&no>0&&num>0&&ele>0){
            total=total+5;
        }
        cout<<total<<endl;
        cout<<"score: "<<total<<endl;
    }
    return 0;
}
