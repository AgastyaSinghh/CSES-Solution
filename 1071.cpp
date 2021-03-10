#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    long long unsigned int res,row,col;
    while(test--){
        
        cin>>row>>col;
        if(row>=col){
            if(row%2){
                res = (row-1)*(row-1);
                res += col;
            }
            else{
                res = (row)*(row);
                res -= (col-1);
            }
        }else{
            if(col%2){
                res = (col)*(col);
                res -= (row-1);
            }else{
                res = (col-1)*(col-1);
                res += row;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
