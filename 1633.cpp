#include<bits/stdc++.h>


using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD int(10e9 + 7)
#define MODD 1000000007


//functions prototype------------------------------

vector<string> getInput();


//solve function-----------------------------------

void solve(void){
    int n;
    cin>>n;
    std::vector<long> v(n+1,0);
    v[0]=1;
    int x,y;
    for(x=0;x<n;x++){
        for(y=1;y<7;y++){
            if(v[x]){
                if(x+y <= n){
                    v[x+y]=(v[x]+v[x+y])%MODD;
                }
            }
        }
    }
    cout<<v[n]<<endl;
}


//main function-----------------------------------
int main(){
    fastio;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ll test=1;
   // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}

/*
//main function-----------------------------------
int main(){
    ll test=1;
    cin>>test;
    for(ll x=0;x<test;x++){
        cout<<"Case #"<<x+1<<": ";
        solve();
    }
    return 0;
}
*/

/* 
vector<string> getInput(){
    vector<string> r;
    string s,str;
    
    getline(cin,s);
    str="";
    for(char c:s){
        if(c==' '){
            r.push_back(str);
            str="";
        }
        else str=str+c;
    }
    r.push_back(str);
    return r;
}
*/