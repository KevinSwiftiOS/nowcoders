#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	string s;
     int vis[200],i;
     memset(vis,0,sizeof(vis));
   while(cin>>s){
     for(i = 0; i < s.length();i++){
    
     		if(vis[s[i] - '0'] == 0) {
     			cout<<s[i];
     			vis[s[i] - '0'] = 1;
			 }
		 }
   cout<<endl;
   }
	 return 0;
}
