#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	vector<int> v(n+1,0);
	int i,c;
	i=0;
	while(i<n){
	    i++;
	    cin>>c;
	    v[c]=v[c]|1;
	}
	n++;
	for(i=1;i<n;i++){
	    if(v[i]==0){
	        cout<<i<<endl;return 0;
	    }
	}
	return 0;
}
