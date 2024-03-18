#include<iostream>
#include<string>
#include<string.h>
#include<time.h>
#include<fstream>
#include<list>
using namespace std;
char key[30]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
char num[10]={'1','2','3','4','5','6','7','8','9','0'};
int main(){
    string s;
    while(getline(cin,s)){
        int l;
        int improve=0;
        int same=0;
        l=s.length();
        int k=0;
        int again=0;
        cout<<"Improvements:"<<endl;
        if(l<8){ //length test
            cout<<"too short"<<endl;
            improve++;
        }
        for(int i=0;i<l-1;i++){
            if(s[i]==s[i+1]){
                same++;
            }
        }
        if(same>0){  //repeated character test
            cout<<"repeated characters"<<endl;
            improve++;
        }
        for(int i=0;i<l-2;i++){ //alphabet test
            if(s[i]<='Z'&&s[i]>='A'||s[i]<='z'&&s[i]>='a'){
                int c;
                int total=0;
                c=s[i];
                for(int j=0;j<2;j++){
                    int c2;
                    c2=s[i+j];
                    if(c2==c+j){
                        //cout<<i<<endl;
                        //cout<<c<<endl;
                        //cout<<c2<<endl;
                        total++;
                    }
                    if(c2+32==c+j){
                        total++;
                    }
                }
                if(total==2){
                    cout<<"alphabetical order"<<endl;
                    improve++;
                    break;
                }
            }
        }
        for(int i=0;i<l-2;i++){  //keyboard test
            int total=0;
            for(int j=0;j<30;j++){
                if(s[i]==key[j]){
                    for(int k=0;k<2;k++){
                        if(s[i+k]==key[j+k]){
                            total++;
                        }
                    }
                    if(total==2){
                        cout<<"keyboard order"<<endl;
                        improve++;
                        break;
                    }
                }
            }
            if(total>0){
                break;
            }
        }
        for(int i=0;i<l-2;i++){  //number test
            int total=0;
            for(int j=0;j<10;j++){
                if(s[i]==num[j]){
                    for(int k=0;k<2;k++){
                        if(s[i+k]==num[j+k]){
                            total++;
                        }
                    }
                    if(total==2){
                        cout<<"numerical order"<<endl;
                        improve++;
                        break;
                    }
                }
            }
            if(total>0){
                break;
            }
        }
        if(improve==0){
            cout<<"none"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
