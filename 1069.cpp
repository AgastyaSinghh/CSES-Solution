#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    char c;
    int len,maxLen;
    maxLen=-1;
    c=s[0];len=1;
    for(int i=1;i<n;i++){
        if(c==s[i])len++;
        else{
            c=s[i];
            if(len>maxLen) maxLen=len;
            len=1;
        }
    }
    
    if(len>maxLen) maxLen=len;
    cout<<maxLen<<endl;
}
